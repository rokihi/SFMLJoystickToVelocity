// -*- C++ -*-
/*!
 * @file  SFMLJoystickToVelocity.cpp
 * @brief SFMLJoystick data convert to Velocity2D
 * @date $Date$
 *
 * $Id$
 */

#include "SFMLJoystickToVelocity.h"

// Module specification
// <rtc-template block="module_spec">
static const char* sfmljoysticktovelocity_spec[] =
  {
    "implementation_id", "SFMLJoystickToVelocity",
    "type_name",         "SFMLJoystickToVelocity",
    "description",       "SFMLJoystick data convert to Velocity2D",
    "version",           "1.0",
    "vendor",            "SSR",
    "category",          "Test",
    "activity_type",     "PERIODIC",
    "kind",              "DataFlowComponent",
    "max_instance",      "1",
    "language",          "C++",
    "lang_type",         "compile",
    // Configuration variables
    "conf.default.debug", "0",
    "conf.default.gainX", "0.01",
    "conf.default.gainTh", "0.01",
    "conf.default.xIndex", "0",
    // Widget
    "conf.__widget__.debug", "text",
    "conf.__widget__.gainX", "text",
    "conf.__widget__.gainTh", "text",
    "conf.__widget__.xIndex", "text",
    // Constraints
    ""
  };
// </rtc-template>

/*!
 * @brief constructor
 * @param manager Maneger Object
 */
SFMLJoystickToVelocity::SFMLJoystickToVelocity(RTC::Manager* manager)
    // <rtc-template block="initializer">
  : RTC::DataFlowComponentBase(manager),
    m_inIn("in", m_in),
    m_velocityOut("velocity", m_velocity)

    // </rtc-template>
{
}

/*!
 * @brief destructor
 */
SFMLJoystickToVelocity::~SFMLJoystickToVelocity()
{
}



RTC::ReturnCode_t SFMLJoystickToVelocity::onInitialize()
{
  // Registration: InPort/OutPort/Service
  // <rtc-template block="registration">
  // Set InPort buffers
  addInPort("in", m_inIn);
  
  // Set OutPort buffer
  addOutPort("velocity", m_velocityOut);
  
  // Set service provider to Ports
  
  // Set service consumers to Ports
  
  // Set CORBA Service Ports
  
  // </rtc-template>

  // <rtc-template block="bind_config">
  // Bind variables and configuration variable
  bindParameter("debug", m_debug, "0");
  bindParameter("gainX", m_gainX, "0.01");
  bindParameter("gainTh", m_gainTh, "0.01");
  bindParameter("xIndex", m_xIndex, "0");
  // </rtc-template>
  
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onFinalize()
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onStartup(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onShutdown(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/


RTC::ReturnCode_t SFMLJoystickToVelocity::onActivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SFMLJoystickToVelocity::onDeactivated(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}


RTC::ReturnCode_t SFMLJoystickToVelocity::onExecute(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onAborting(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onError(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onReset(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onStateUpdate(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/

/*
RTC::ReturnCode_t SFMLJoystickToVelocity::onRateChanged(RTC::UniqueId ec_id)
{
  return RTC::RTC_OK;
}
*/



extern "C"
{
 
  void SFMLJoystickToVelocityInit(RTC::Manager* manager)
  {
    coil::Properties profile(sfmljoysticktovelocity_spec);
    manager->registerFactory(profile,
                             RTC::Create<SFMLJoystickToVelocity>,
                             RTC::Delete<SFMLJoystickToVelocity>);
  }
  
};


