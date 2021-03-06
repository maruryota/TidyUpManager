﻿// -*- C++ -*-
/*!
 * @file  TidyUpManager.h
 * @brief ModuleDescription
 * @date  $Date$
 *
 * $Id$
 */

#ifndef TIDYUPMANAGER_H
#define TIDYUPMANAGER_H

#include <rtm/idl/BasicDataTypeSkel.h>
#include <rtm/idl/ExtendedDataTypesSkel.h>
#include <rtm/idl/InterfaceDataTypesSkel.h>

// Service implementation headers
// <rtc-template block="service_impl_h">
#include "TidyUpManagerSVC_impl.h"

// </rtc-template>

// Service Consumer stub headers
// <rtc-template block="consumer_stub_h">

// </rtc-template>

// Service Consumer stub headers
// <rtc-template block="port_stub_h">
// </rtc-template>

#include <rtm/Manager.h>
#include <rtm/DataFlowComponentBase.h>
#include <rtm/CorbaPort.h>
#include <rtm/DataInPort.h>
#include <rtm/DataOutPort.h>

using namespace RTC;


namespace ogata_lab {
	/*!
	 * @class TidyUpManager
	 * @brief ModuleDescription
	 *
	 */
	class TidyUpManager
		: public RTC::DataFlowComponentBase
	{
	public:
		/*!
		 * @brief constructor
		 * @param manager Maneger Object
		 */
		TidyUpManager(RTC::Manager* manager);

		/*!
		 * @brief destructor
		 */
		~TidyUpManager();

		// <rtc-template block="public_attribute">

		// </rtc-template>

		// <rtc-template block="public_operation">

		// </rtc-template>

		/***
		 *
		 * The initialize action (on CREATED->ALIVE transition)
		 * formaer rtc_init_entry()
		 *
		 * @return RTC::ReturnCode_t
		 *
		 *
		 */
		virtual RTC::ReturnCode_t onInitialize();

		/***
		 *
		 * The finalize action (on ALIVE->END transition)
		 * formaer rtc_exiting_entry()
		 *
		 * @return RTC::ReturnCode_t
		 *
		 *
		 */
		 // virtual RTC::ReturnCode_t onFinalize();

		 /***
		  *
		  * The startup action when ExecutionContext startup
		  * former rtc_starting_entry()
		  *
		  * @param ec_id target ExecutionContext Id
		  *
		  * @return RTC::ReturnCode_t
		  *
		  *
		  */
		  // virtual RTC::ReturnCode_t onStartup(RTC::UniqueId ec_id);

		  /***
		   *
		   * The shutdown action when ExecutionContext stop
		   * former rtc_stopping_entry()
		   *
		   * @param ec_id target ExecutionContext Id
		   *
		   * @return RTC::ReturnCode_t
		   *
		   *
		   */
		   // virtual RTC::ReturnCode_t onShutdown(RTC::UniqueId ec_id);

		   /***
			*
			* The activated action (Active state entry action)
			* former rtc_active_entry()
			*
			* @param ec_id target ExecutionContext Id
			*
			* @return RTC::ReturnCode_t
			*
			*
			*/
			// virtual RTC::ReturnCode_t onActivated(RTC::UniqueId ec_id);

			/***
			 *
			 * The deactivated action (Active state exit action)
			 * former rtc_active_exit()
			 *
			 * @param ec_id target ExecutionContext Id
			 *
			 * @return RTC::ReturnCode_t
			 *
			 *
			 */
			 // virtual RTC::ReturnCode_t onDeactivated(RTC::UniqueId ec_id);

			 /***
			  *
			  * The execution action that is invoked periodically
			  * former rtc_active_do()
			  *
			  * @param ec_id target ExecutionContext Id
			  *
			  * @return RTC::ReturnCode_t
			  *
			  *
			  */
			  virtual RTC::ReturnCode_t onExecute(RTC::UniqueId ec_id);

			  /***
			   *
			   * The aborting action when main logic error occurred.
			   * former rtc_aborting_entry()
			   *
			   * @param ec_id target ExecutionContext Id
			   *
			   * @return RTC::ReturnCode_t
			   *
			   *
			   */
			   // virtual RTC::ReturnCode_t onAborting(RTC::UniqueId ec_id);

			   /***
				*
				* The error action in ERROR state
				* former rtc_error_do()
				*
				* @param ec_id target ExecutionContext Id
				*
				* @return RTC::ReturnCode_t
				*
				*
				*/
				// virtual RTC::ReturnCode_t onError(RTC::UniqueId ec_id);

				/***
				 *
				 * The reset action that is invoked resetting
				 * This is same but different the former rtc_init_entry()
				 *
				 * @param ec_id target ExecutionContext Id
				 *
				 * @return RTC::ReturnCode_t
				 *
				 *
				 */
				 // virtual RTC::ReturnCode_t onReset(RTC::UniqueId ec_id);

				 /***
				  *
				  * The state update action that is invoked after onExecute() action
				  * no corresponding operation exists in OpenRTm-aist-0.2.0
				  *
				  * @param ec_id target ExecutionContext Id
				  *
				  * @return RTC::ReturnCode_t
				  *
				  *
				  */
				  // virtual RTC::ReturnCode_t onStateUpdate(RTC::UniqueId ec_id);

				  /***
				   *
				   * The action that is invoked when execution context's rate is changed
				   * no corresponding operation exists in OpenRTm-aist-0.2.0
				   *
				   * @param ec_id target ExecutionContext Id
				   *
				   * @return RTC::ReturnCode_t
				   *
				   *
				   */
				   // virtual RTC::ReturnCode_t onRateChanged(RTC::UniqueId ec_id);


	protected:
		// <rtc-template block="protected_attribute">

		// </rtc-template>

		// <rtc-template block="protected_operation">

		// </rtc-template>

		// Configuration variable declaration
		// <rtc-template block="config_declare">

		// </rtc-template>

		// DataInPort declaration
		// <rtc-template block="inport_declare">

		// </rtc-template>


		// DataOutPort declaration
		// <rtc-template block="outport_declare">

		// </rtc-template>

		// CORBA Port declaration
		// <rtc-template block="corbaport_declare">
		/*!
		 */
		RTC::CorbaPort m_tidyUpManagerPort;
		/*!
		 */
		RTC::CorbaPort m_StringNavigationManagerServicePort;
		/*!
		 */
		RTC::CorbaPort m_PickerPort;
		/*!
		 */
		RTC::CorbaPort m_DroperPort;

		// </rtc-template>

		// Service declaration
		// <rtc-template block="service_declare">
		/*!
		 */
		ogata_TidyUpManagerSVC_impl m_tidyUpManager;

		// </rtc-template>

		// Consumer declaration
		// <rtc-template block="consumer_declare">
		/*!
		 */
		RTC::CorbaConsumer<ogata::StringNavigationCommanderService> m_StringNavigationManagerService;
		/*!
		 */
		RTC::CorbaConsumer<ogata::Picker> m_Picker;
		/*!
		 */
		RTC::CorbaConsumer<ogata::Droper> m_Droper;

		// </rtc-template>

	private:
		// <rtc-template block="private_attribute">

		// </rtc-template>

		// <rtc-template block="private_operation">

		// </rtc-template>

	public:

		std::vector<double> move_queue;

		ogata::RETURN_VALUE move(const RTC::TimedPose2D& path) {
			//move_queue.push_back(path.data.position.x);
			//move_queue.push_back(path.data.position.y);
			//move_queue.push_back(path.data.heading);
			//return ogata::RETVAL_OK;// OK;
//			return m_StringNavigationManagerService._ptr()->move(path);
			return m_StringNavigationManagerService->move(path);
		}

		bool is_moving() {
			return move_queue.size() > 0;
		}

		ogata::RETURN_VALUE pick(const RTC::TimedString& kind) {
			return m_Picker->pick(kind);
		}

	};

}

extern "C"
{
  DLL_EXPORT void TidyUpManagerInit(RTC::Manager* manager);
};

#endif // TIDYUPMANAGER_H
