// -*-C++-*-
/*!
 * @file  TidyUpManagerSVC_impl.cpp
 * @brief Service implementation code of TidyUpManager.idl
 *
 */

#include "TidyUpManagerSVC_impl.h"

#include "TidyUpManager.h"

/*
 * Example implementational code for IDL interface ogata::TidyUpManager
 */
ogata_TidyUpManagerSVC_impl::ogata_TidyUpManagerSVC_impl()
{
  // Please add extra constructor code here.
}


ogata_TidyUpManagerSVC_impl::~ogata_TidyUpManagerSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
ogata::RETURN_VALUE ogata_TidyUpManagerSVC_impl::tidyup(const RTC::TimedPose2D& path, const RTC::TimedString& kind)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
	#warning "Code missing in function <ogata::RETURN_VALUE ogata_TidyUpManagerSVC_impl::tidyup(const RTC::TimedPose2D& path, const RTC::TimedString& kind)>"
#endif
	std::cout << "start move" << std::endl;
	ogata::RETURN_VALUE retval = m_pRTC->move(path);

	while (m_pRTC->is_moving()) {
		coil::usleep(100 * 1000);
	  }

	  

	  //ogata::RETURN_VALUE retval = m_StringNavigationManagerService->move(path);
	  if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
		  std::cout << "following is done" << std::endl;

		  ogata::RETURN_VALUE retval = m_pRTC->pick(kind);
		  std::cout << "return status" << std::endl;

		  while (m_pRTC->is_moving()) {
			  coil::usleep(100 * 1000);
		  }

		  if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
			  std::cout << "picking is done" << std::endl;
			  //retval = m_Droper->drop(kind);

			  /*if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
				  std::cout << "dropping is done" << std::endl;
				  std::cout << "tidying up finished" << std::endl;

				  return ogata::RETURN_VALUE::RETVAL_OK;
			  }
			  else {
				  std::cout << "dropping is failed:" << retval << std::endl;
				  return ogata::RETURN_VALUE::RETVAL_UNKNOWN_ERROR;
			  }*/
		  }
		  else {
			  std::cout << "picking is failed:" << retval << std::endl;
			  return ogata::RETURN_VALUE::RETVAL_UNKNOWN_ERROR;
		  }
	  }
	  else {
		  std::cout << "following is failed:" << retval << std::endl;
		  return ogata::RETURN_VALUE::RETVAL_UNKNOWN_ERROR;
	  }
	  return ogata::RETURN_VALUE::RETVAL_OK;
}



// End of example implementational code

/*
 * Example implementational code for IDL interface ogata::StringNavigationCommanderService
 */
ogata_StringNavigationCommanderServiceSVC_impl::ogata_StringNavigationCommanderServiceSVC_impl()
{
  // Please add extra constructor code here.
}


ogata_StringNavigationCommanderServiceSVC_impl::~ogata_StringNavigationCommanderServiceSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
ogata::RETURN_VALUE ogata_StringNavigationCommanderServiceSVC_impl::move(const RTC::TimedPose2D& path)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_StringNavigationCommanderServiceSVC_impl::move(const RTC::TimedPose2D& path)>"
#endif
  return ogata::RETURN_VALUE::RETVAL_OK;
}



// End of example implementational code

/*
 * Example implementational code for IDL interface ogata::Picker
 */
ogata_PickerSVC_impl::ogata_PickerSVC_impl()
{
  // Please add extra constructor code here.
}


ogata_PickerSVC_impl::~ogata_PickerSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
ogata::RETURN_VALUE ogata_PickerSVC_impl::pick(const RTC::TimedString& kind)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_PickerSVC_impl::pick(const RTC::TimedString& kind)>"
#endif
  return ogata::RETURN_VALUE::RETVAL_OK;
}



// End of example implementational code

/*
 * Example implementational code for IDL interface ogata::Droper
 */
ogata_DroperSVC_impl::ogata_DroperSVC_impl()
{
  // Please add extra constructor code here.
}


ogata_DroperSVC_impl::~ogata_DroperSVC_impl()
{
  // Please add extra destructor code here.
}


/*
 * Methods corresponding to IDL attributes and operations
 */
ogata::RETURN_VALUE ogata_DroperSVC_impl::drop(const RTC::TimedString& kind)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_DroperSVC_impl::drop(const RTC::TimedString& kind)>"
#endif
  return ogata::RETURN_VALUE::RETVAL_OK;
}



// End of example implementational code



