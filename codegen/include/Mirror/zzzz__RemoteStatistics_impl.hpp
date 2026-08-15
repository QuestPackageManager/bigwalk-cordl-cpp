#pragma once
// IWYU pragma private; include "Mirror/RemoteStatistics.hpp"
#include "Mirror/zzzz__NetworkBehaviour_impl.hpp"
#include "Mirror/zzzz__Stats_impl.hpp"
#include "UnityEngine/zzzz__KeyCode_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Mirror/zzzz__RemoteStatistics_def.hpp"
#include "Mirror/zzzz__NetworkBehaviour_def.hpp"
#include "Mirror/zzzz__NetworkConnectionToClient_def.hpp"
#include "Mirror/zzzz__NetworkReader_def.hpp"
#include "Mirror/zzzz__NetworkStatistics_def.hpp"
#include "Mirror/zzzz__Stats_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::Mirror::RemoteStatistics.LoadPassword
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::LoadPassword)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18152d5e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"LoadPassword", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.OnValidate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::OnValidate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18152d8d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                    {::i2c::class_of<::Mirror::RemoteStatistics*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.OnStartServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::OnStartServer)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x18152d7e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                    {::i2c::class_of<::Mirror::RemoteStatistics*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.OnStartLocalPlayer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::OnStartLocalPlayer)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18152d770;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                    {::i2c::class_of<::Mirror::RemoteStatistics*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.TargetRpcSync
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::Mirror::Stats)>(&::Mirror::RemoteStatistics::TargetRpcSync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x18152db30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"TargetRpcSync", {}, {::i2c::type_of<::Mirror::Stats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.CmdAuthenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::StringW)>(&::Mirror::RemoteStatistics::CmdAuthenticate)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x18152c4c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"CmdAuthenticate", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.UpdateServer
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::UpdateServer)> {
  constexpr static std::size_t size = 0x2a0;
  constexpr static std::size_t addrs = 0x18152dc70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UpdateServer", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.UpdateClient
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::UpdateClient)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18152dc40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UpdateClient", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::Update)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x18152df10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::OnGUI)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x18152d690;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUILayout_TextAndValue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::StringW, ::StringW)>(&::Mirror::RemoteStatistics::GUILayout_TextAndValue)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x18152c850;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_TextAndValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUILayout_ProgressBar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(double_t, int32_t)>(&::Mirror::RemoteStatistics::GUILayout_ProgressBar)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18152c580;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_ProgressBar", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUILayout_TextAndProgressBar
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::StringW, double_t, int32_t, ::StringW, int32_t, ::UnityEngine::Color)>(&::Mirror::RemoteStatistics::GUILayout_TextAndProgressBar)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x18152c630;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_TextAndProgressBar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUI_Authenticate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::GUI_Authenticate)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x18152c9a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Authenticate", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUI_General
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(int32_t, double_t, int32_t, int32_t)>(&::Mirror::RemoteStatistics::GUI_General)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x18152cf80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_General", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUI_Traffic
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(int64_t, int64_t)>(&::Mirror::RemoteStatistics::GUI_Traffic)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x18152d1c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Traffic", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUI_Cpu
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(float_t, double_t, double_t, double_t, double_t, double_t)>(&::Mirror::RemoteStatistics::GUI_Cpu)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x18152ccc0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Cpu", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.GUI_Notice
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::GUI_Notice)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Notice", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.OnWindow
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(int32_t)>(&::Mirror::RemoteStatistics::OnWindow)> {
  constexpr static std::size_t size = 0x250;
  constexpr static std::size_t addrs = 0x18152d8e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"OnWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x18152e130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.MirrorProcessed
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)()>(&::Mirror::RemoteStatistics::MirrorProcessed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.UserCode_TargetRpcSync__Stats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::Mirror::Stats)>(&::Mirror::RemoteStatistics::UserCode_TargetRpcSync__Stats)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x18152e020;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UserCode_TargetRpcSync__Stats", {}, {::i2c::type_of<::Mirror::Stats>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.InvokeUserCode_TargetRpcSync__Stats
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::RemoteStatistics::InvokeUserCode_TargetRpcSync__Stats)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x18152d4b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"InvokeUserCode_TargetRpcSync__Stats", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.UserCode_CmdAuthenticate__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Mirror::RemoteStatistics::*)(::StringW)>(&::Mirror::RemoteStatistics::UserCode_CmdAuthenticate__String)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x18152df70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UserCode_CmdAuthenticate__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Mirror::RemoteStatistics.InvokeUserCode_CmdAuthenticate__String
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::Mirror::NetworkBehaviour*, ::Mirror::NetworkReader*, ::Mirror::NetworkConnectionToClient*)>(&::Mirror::RemoteStatistics::InvokeUserCode_CmdAuthenticate__String)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x18152d350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"InvokeUserCode_CmdAuthenticate__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Mirror::NetworkStatistics>& Mirror::RemoteStatistics::__cordl_internal_get_NetworkStatistics()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkStatistics;
}
constexpr ::UnityW<::Mirror::NetworkStatistics> const& Mirror::RemoteStatistics::__cordl_internal_get_NetworkStatistics() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___NetworkStatistics;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_NetworkStatistics(::UnityW<::Mirror::NetworkStatistics>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___NetworkStatistics = value;
}
constexpr float_t& Mirror::RemoteStatistics::__cordl_internal_get_sendInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendInterval;
}
constexpr float_t const& Mirror::RemoteStatistics::__cordl_internal_get_sendInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___sendInterval;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_sendInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___sendInterval = value;
}
constexpr double_t& Mirror::RemoteStatistics::__cordl_internal_get_lastSendTime()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendTime;
}
constexpr double_t const& Mirror::RemoteStatistics::__cordl_internal_get_lastSendTime() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lastSendTime;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_lastSendTime(double_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lastSendTime = value;
}
constexpr bool& Mirror::RemoteStatistics::__cordl_internal_get_showGui()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGui;
}
constexpr bool const& Mirror::RemoteStatistics::__cordl_internal_get_showGui() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___showGui;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_showGui(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___showGui = value;
}
constexpr ::UnityEngine::KeyCode& Mirror::RemoteStatistics::__cordl_internal_get_hotKey()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotKey;
}
constexpr ::UnityEngine::KeyCode const& Mirror::RemoteStatistics::__cordl_internal_get_hotKey() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hotKey;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_hotKey(::UnityEngine::KeyCode  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hotKey = value;
}
constexpr ::UnityEngine::Rect& Mirror::RemoteStatistics::__cordl_internal_get_windowRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowRect;
}
constexpr ::UnityEngine::Rect const& Mirror::RemoteStatistics::__cordl_internal_get_windowRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___windowRect;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_windowRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___windowRect = value;
}
constexpr ::StringW& Mirror::RemoteStatistics::__cordl_internal_get_passwordFile()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordFile;
}
constexpr ::StringW const& Mirror::RemoteStatistics::__cordl_internal_get_passwordFile() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___passwordFile;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_passwordFile(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___passwordFile = value;
}
constexpr bool& Mirror::RemoteStatistics::__cordl_internal_get_serverAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAuthenticated;
}
constexpr bool const& Mirror::RemoteStatistics::__cordl_internal_get_serverAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverAuthenticated;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_serverAuthenticated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverAuthenticated = value;
}
constexpr bool& Mirror::RemoteStatistics::__cordl_internal_get_clientAuthenticated()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthenticated;
}
constexpr bool const& Mirror::RemoteStatistics::__cordl_internal_get_clientAuthenticated() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientAuthenticated;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_clientAuthenticated(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientAuthenticated = value;
}
constexpr ::StringW& Mirror::RemoteStatistics::__cordl_internal_get_serverPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverPassword;
}
constexpr ::StringW const& Mirror::RemoteStatistics::__cordl_internal_get_serverPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___serverPassword;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_serverPassword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___serverPassword = value;
}
constexpr ::StringW& Mirror::RemoteStatistics::__cordl_internal_get_clientPassword()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientPassword;
}
constexpr ::StringW const& Mirror::RemoteStatistics::__cordl_internal_get_clientPassword() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clientPassword;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_clientPassword(::StringW  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clientPassword = value;
}
constexpr ::Mirror::Stats& Mirror::RemoteStatistics::__cordl_internal_get_stats()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stats;
}
constexpr ::Mirror::Stats const& Mirror::RemoteStatistics::__cordl_internal_get_stats() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stats;
}
constexpr void Mirror::RemoteStatistics::__cordl_internal_set_stats(::Mirror::Stats  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stats = value;
}
inline void Mirror::RemoteStatistics::LoadPassword()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"LoadPassword", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::OnValidate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteStatistics*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::OnStartServer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteStatistics*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::OnStartLocalPlayer()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Mirror::RemoteStatistics*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::TargetRpcSync(::Mirror::Stats  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"TargetRpcSync", {}, {::i2c::type_of<::Mirror::Stats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Mirror::RemoteStatistics::CmdAuthenticate(::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"CmdAuthenticate", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Mirror::RemoteStatistics::UpdateServer()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UpdateServer", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::UpdateClient()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UpdateClient", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::GUILayout_TextAndValue(::StringW  text, ::StringW  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_TextAndValue", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, value);
}
inline void Mirror::RemoteStatistics::GUILayout_ProgressBar(double_t  ratio, int32_t  width)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_ProgressBar", {}, {::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ratio, width);
}
inline void Mirror::RemoteStatistics::GUILayout_TextAndProgressBar(::StringW  text, double_t  ratio, int32_t  progressbarWidth, ::StringW  caption, int32_t  captionWidth, ::UnityEngine::Color  captionColor)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUILayout_TextAndProgressBar", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Color>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, text, ratio, progressbarWidth, caption, captionWidth, captionColor);
}
inline void Mirror::RemoteStatistics::GUI_Authenticate()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Authenticate", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::GUI_General(int32_t  connections, double_t  uptime, int32_t  configuredTickRate, int32_t  actualTickRate)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_General", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, connections, uptime, configuredTickRate, actualTickRate);
}
inline void Mirror::RemoteStatistics::GUI_Traffic(int64_t  serverSentBytesPerSecond, int64_t  serverReceivedBytesPerSecond)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Traffic", {}, {::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverSentBytesPerSecond, serverReceivedBytesPerSecond);
}
inline void Mirror::RemoteStatistics::GUI_Cpu(float_t  serverTickInterval, double_t  fullUpdateAvg, double_t  serverEarlyAvg, double_t  serverLateAvg, double_t  transportEarlyAvg, double_t  transportLateAvg)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Cpu", {}, {::i2c::type_of<float_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serverTickInterval, fullUpdateAvg, serverEarlyAvg, serverLateAvg, transportEarlyAvg, transportLateAvg);
}
inline void Mirror::RemoteStatistics::GUI_Notice()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"GUI_Notice", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::OnWindow(int32_t  windowID)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"OnWindow", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, windowID);
}
inline void Mirror::RemoteStatistics::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::MirrorProcessed()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"MirrorProcessed", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Mirror::RemoteStatistics::UserCode_TargetRpcSync__Stats(::Mirror::Stats  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UserCode_TargetRpcSync__Stats", {}, {::i2c::type_of<::Mirror::Stats>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Mirror::RemoteStatistics::InvokeUserCode_TargetRpcSync__Stats(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"InvokeUserCode_TargetRpcSync__Stats", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline void Mirror::RemoteStatistics::UserCode_CmdAuthenticate__String(::StringW  v)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"UserCode_CmdAuthenticate__String", {}, {::i2c::type_of<::StringW>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, v);
}
inline void Mirror::RemoteStatistics::InvokeUserCode_CmdAuthenticate__String(::Mirror::NetworkBehaviour*  obj, ::Mirror::NetworkReader*  reader, ::Mirror::NetworkConnectionToClient*  senderConnection)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Mirror::RemoteStatistics*>(),
                        {"InvokeUserCode_CmdAuthenticate__String", {}, {::i2c::type_of<::Mirror::NetworkBehaviour*>(), ::i2c::type_of<::Mirror::NetworkReader*>(), ::i2c::type_of<::Mirror::NetworkConnectionToClient*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, obj, reader, senderConnection);
}
inline ::Mirror::RemoteStatistics* Mirror::RemoteStatistics::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Mirror::RemoteStatistics*>());
}
// Ctor Parameters []
constexpr ::Mirror::RemoteStatistics::RemoteStatistics()   {
}
