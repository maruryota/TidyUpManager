// -*-C++-*-
/*!
 * @file  TidyUpManagerSVC_impl.cpp
 * @brief Service implementation code of TidyUpManager.idl
 *
 */

#include "TidyUpManagerSVC_impl.h"

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
ogata::RETURN_VALUE ogata_TidyUpManagerSVC_impl::tidyup(const RTC::Pose2D& path)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_TidyUpManagerSVC_impl::tidyup(const RTC::Pose2D& path)>"
#endif
	  ogata::RETURN_VALUE retval = m_StringNavigationManagerService->move(path);
	  if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
		  std::cout << "following is done" << std::endl;
		  retval = m_Picker->pick();
		  
		  if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
			  std::cout << "picking is done" << std::endl;
			  retval = m_Droper->drop();

			  if (retval == ogata::RETURN_VALUE::RETVAL_OK) {
				  std::cout << "dropping is done" << std::endl;
				  std::cout << "tidying up finished" << std::endl;

				  return ogata::RETURN_VALUE::RETVAL_OK;
			  }
			  else {
				  std::cout << "dropping is failed:" << retval << std::endl;
				  return ogata::RETURN_VALUE::RETVAL_UNKNOWN_ERROR;
			  }
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
ogata::RETURN_VALUE ogata_StringNavigationCommanderServiceSVC_impl::move(const RTC::Pose2D& path)
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_StringNavigationCommanderServiceSVC_impl::move(const RTC::Pose2D& path)>"
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
ogata::RETURN_VALUE ogata_PickerSVC_impl::pick()
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
  #warning "Code missing in function <ogata::RETURN_VALUE ogata_PickerSVC_impl::pick()>"
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
ogata::RETURN_VALUE ogata_DroperSVC_impl::drop()
{
  // Please insert your code here and remove the following warning pragma
#ifndef WIN32
	#warning "Code missing in function <ogata::RETURN_VALUE ogata_DroperSVC_impl::drop()>"
#endif

  return ogata::RETURN_VALUE::RETVAL_OK;
}



// End of example implementational code



