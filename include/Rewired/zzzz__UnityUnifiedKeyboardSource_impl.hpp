#pragma once
// IWYU pragma private; include "Rewired/UnityUnifiedKeyboardSource.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rewired/zzzz__UnityUnifiedKeyboardSource_def.hpp"
#include "Rewired/Interfaces/zzzz__IGetSetEnabled_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedKeyboardSource_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__ControllerElementType_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.get_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::get_enabled)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180392490;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.set_enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)(bool)>(&::Rewired::UnityUnifiedKeyboardSource::set_enabled)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181967340;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.get_inputSource
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::InputSource (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::get_inputSource)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181967330;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_inputSource", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.get_hardwareMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::get_hardwareMap)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819672d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_hardwareMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.get_buttonCount
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::get_buttonCount)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180720980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_buttonCount", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.get_controllerExtension
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::Controller_Extension* (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::get_controllerExtension)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_controllerExtension", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181967290;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.UpdateInputData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)(::Rewired::ControllerDataUpdater*)>(&::Rewired::UnityUnifiedKeyboardSource::UpdateInputData)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181967250;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"UpdateInputData", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.Clear
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::Clear)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"Clear", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.CreateHardwareMap
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::HardwareControllerMap_Game* (*)()>(&::Rewired::UnityUnifiedKeyboardSource::CreateHardwareMap)> {
  constexpr static std::size_t size = 0x3b0;
  constexpr static std::size_t addrs = 0x181966dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"CreateHardwareMap", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::Dispose)> {
  constexpr static std::size_t size = 0x26510;
  constexpr static std::size_t addrs = 0x1809d1fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.Finalize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)()>(&::Rewired::UnityUnifiedKeyboardSource::Finalize)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181615130;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(), 1}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::UnityUnifiedKeyboardSource::*)(bool)>(&::Rewired::UnityUnifiedKeyboardSource::Dispose)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181967180;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                    {::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::UnityUnifiedKeyboardSource.GetHardwareElementType
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Rewired::ControllerElementType (*)(int32_t)>(&::Rewired::UnityUnifiedKeyboardSource::GetHardwareElementType)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1819671d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"GetHardwareElementType", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Rewired::UnityUnifiedKeyboardSource::__cordl_internal_get_lBEWIpbZeOPHHthtBGKlBLFBGyOs()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lBEWIpbZeOPHHthtBGKlBLFBGyOs;
}
constexpr bool const& Rewired::UnityUnifiedKeyboardSource::__cordl_internal_get_lBEWIpbZeOPHHthtBGKlBLFBGyOs() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___lBEWIpbZeOPHHthtBGKlBLFBGyOs;
}
constexpr void Rewired::UnityUnifiedKeyboardSource::__cordl_internal_set_lBEWIpbZeOPHHthtBGKlBLFBGyOs(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___lBEWIpbZeOPHHthtBGKlBLFBGyOs = value;
}
constexpr bool& Rewired::UnityUnifiedKeyboardSource::__cordl_internal_get_rjyTMGshUWIRFbItSeRYagKVDRcW()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rjyTMGshUWIRFbItSeRYagKVDRcW;
}
constexpr bool const& Rewired::UnityUnifiedKeyboardSource::__cordl_internal_get_rjyTMGshUWIRFbItSeRYagKVDRcW() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rjyTMGshUWIRFbItSeRYagKVDRcW;
}
constexpr void Rewired::UnityUnifiedKeyboardSource::__cordl_internal_set_rjyTMGshUWIRFbItSeRYagKVDRcW(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rjyTMGshUWIRFbItSeRYagKVDRcW = value;
}
inline void Rewired::UnityUnifiedKeyboardSource::setStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY(::Rewired::HardwareControllerMap_Game*  value)  {
::cordl_internals::setStaticField<::Rewired::HardwareControllerMap_Game*, "MnyuEkdPvYPgjROvCibfKAhYxFCY", ::Rewired::UnityUnifiedKeyboardSource*>(std::forward<::Rewired::HardwareControllerMap_Game*>(value));
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::UnityUnifiedKeyboardSource::getStaticF_MnyuEkdPvYPgjROvCibfKAhYxFCY()  {
return ::cordl_internals::getStaticField<::Rewired::HardwareControllerMap_Game*, "MnyuEkdPvYPgjROvCibfKAhYxFCY", ::Rewired::UnityUnifiedKeyboardSource*>();
}
inline bool Rewired::UnityUnifiedKeyboardSource::get_enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::set_enabled(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"set_enabled", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::Rewired::InputSource Rewired::UnityUnifiedKeyboardSource::get_inputSource()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_inputSource", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::InputSource>(this, ___internal_method);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::UnityUnifiedKeyboardSource::get_hardwareMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_hardwareMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(this, ___internal_method);
}
inline int32_t Rewired::UnityUnifiedKeyboardSource::get_buttonCount()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_buttonCount", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::Rewired::Controller_Extension* Rewired::UnityUnifiedKeyboardSource::get_controllerExtension()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"get_controllerExtension", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::Controller_Extension*>(this, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::UpdateInputData(::Rewired::ControllerDataUpdater*  dataUpdater)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"UpdateInputData", {}, {::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dataUpdater);
}
inline void Rewired::UnityUnifiedKeyboardSource::Clear()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"Clear", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::HardwareControllerMap_Game* Rewired::UnityUnifiedKeyboardSource::CreateHardwareMap()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"CreateHardwareMap", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::HardwareControllerMap_Game*>(nullptr, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::Finalize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(), 1}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::UnityUnifiedKeyboardSource::Dispose(bool  disposing)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline ::Rewired::ControllerElementType Rewired::UnityUnifiedKeyboardSource::GetHardwareElementType(int32_t  elementIdentifierId)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::UnityUnifiedKeyboardSource*>(),
                        {"GetHardwareElementType", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<::Rewired::ControllerElementType>(nullptr, ___internal_method, elementIdentifierId);
}
inline ::Rewired::UnityUnifiedKeyboardSource* Rewired::UnityUnifiedKeyboardSource::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::UnityUnifiedKeyboardSource*>());
}
/// @brief Convert operator to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr  Rewired::UnityUnifiedKeyboardSource::operator ::Rewired::Interfaces::IUnifiedKeyboardSource*() noexcept {
return static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IUnifiedKeyboardSource"
constexpr ::Rewired::Interfaces::IUnifiedKeyboardSource* Rewired::UnityUnifiedKeyboardSource::i___Rewired__Interfaces__IUnifiedKeyboardSource() noexcept {
return static_cast<::Rewired::Interfaces::IUnifiedKeyboardSource*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::Rewired::Interfaces::IGetSetEnabled"
constexpr  Rewired::UnityUnifiedKeyboardSource::operator ::Rewired::Interfaces::IGetSetEnabled*() noexcept {
return static_cast<::Rewired::Interfaces::IGetSetEnabled*>(static_cast<void*>(this));
}
/// @brief Convert to "::Rewired::Interfaces::IGetSetEnabled"
constexpr ::Rewired::Interfaces::IGetSetEnabled* Rewired::UnityUnifiedKeyboardSource::i___Rewired__Interfaces__IGetSetEnabled() noexcept {
return static_cast<::Rewired::Interfaces::IGetSetEnabled*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr  Rewired::UnityUnifiedKeyboardSource::operator ::System::IDisposable*() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Rewired::UnityUnifiedKeyboardSource::i___System__IDisposable() noexcept {
return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Rewired::UnityUnifiedKeyboardSource::UnityUnifiedKeyboardSource()   {
}
