// -*- C++ -*-
/*!
 * @file  TidyUpManagerTest.cpp
 * @brief ModuleDescription
 * @date $Date$
 *
 * $Id$
 */

#include "TidyUpManagerTest.h"

// Module specification
// <rtc-template block="module_spec">
static const char* tidyupmanager_spec[] =
  {
    "implementation_id", "TidyUpManagerTest",
    "type_name",         "TidyUpManagerTest",
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
TidyUpManagerTest::TidyUpManagerTest(RTC::Manager* manager)
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
TidyUpManagerTest::~TidyUpManagerTest()
{
}



RTC::ReturnCode_t TidyUpManagerTest::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  
  // Set OutPort buffer
  
  // Set service provider to Ports
  m_StringNavigationManagerServicePort.registerProvider("StringNavigationManagerService", "ogata::StringNavigationCommanderService", m_StringNavigationManagerService);
  m_PickerPort.registerProvider("Picker", "ogata::Picker", m_Picker);
  m_DroperPort.registerProvider("Droper", "ogata::Droper", m_Droper);
  
  // Set service consumers to Ports
  m_tidyUpManagerPort.registerConsumer("tidyUpManager", "ogata::TidyUpManager", m_tidyUpManager);
  
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
RTC::ReturnCode_t TidyUpManagerTest::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t TidyUpManagerTest::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void TidyUpManagerTestInit(RTC::Manager* manager)
  {
    coil::Properties profile(tidyupmanager_spec);
    manager->registerFactory(profile,
                             RTC::Create<TidyUpManagerTest>,
                             RTC::Delete<TidyUpManagerTest>);
  }
  
};


