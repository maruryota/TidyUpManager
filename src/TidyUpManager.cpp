// -*- C++ -*-
/*!
 * @file  TidyUpManager.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "TidyUpManager.h"

// Module specification
// <rtc-template block="module_spec">
static const char* tidyupmanager_spec[] =
  {
    "implementation_id", "TidyUpManager",
    "type_name",         "TidyUpManager",
    "description",       "ModuleDescription",
    "version",           "1.0.0",
    "vendor",            "maruryota",
    "category",          "Category",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
TidyUpManager::TidyUpManager(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_tidyUpManagerPort("tidyUpManager"),
    m_StringNavigationManagerServicePort("StringNavigationManagerService"),
    m_PickerPort("Picker"),
    m_DroperPort("Droper")

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
TidyUpManager::~TidyUpManager()
{
}



RTC::ReturnCode_t TidyUpManager::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  m_tidyUpManagerPort.registerProvider("tidyUpManager", "ogata::TidyUpManager", m_tidyUpManager);
  
  // Set service consumers to Ports
  m_StringNavigationManagerServicePort.registerConsumer("StringNavigationManagerService", "ogata::StringNavigationCommanderService", m_StringNavigationManagerService);
  m_PickerPort.registerConsumer("Picker", "ogata::Picker", m_Picker);
  m_DroperPort.registerConsumer("Droper", "ogata::Droper", m_Droper);
  
  // Set CORBA Service Ports
  addPort(m_tidyUpManagerPort);
  addPort(m_StringNavigationManagerServicePort);
  addPort(m_PickerPort);
  addPort(m_DroperPort);
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t TidyUpManager::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManager::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void TidyUpManagerInit(RTC::Manager* manager)
  {
    coil::Properties profile(tidyupmanager_spec);
    manager->registerFactory(profile,
                             RTC::Create<TidyUpManager>,
                             RTC::Delete<TidyUpManager>);
  }
  
};


