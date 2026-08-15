#pragma once
// IWYU pragma private; include "Rewired/Mouse.hpp"
#include "Rewired/zzzz__ControllerWithAxes_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "Rewired/zzzz__Mouse_def.hpp"
#include "Rewired/Interfaces/zzzz__IUnifiedMouseSource_def.hpp"
#include "Rewired/Utils/Classes/Utility/zzzz__TimerAbs_def.hpp"
#include "Rewired/zzzz__ControllerDataUpdater_def.hpp"
#include "Rewired/zzzz__Controller_def.hpp"
#include "Rewired/zzzz__HardwareControllerMap_Game_def.hpp"
#include "Rewired/zzzz__InputSource_def.hpp"
#include "Rewired/zzzz__Pole_def.hpp"
#include "Rewired/zzzz__UpdateLoopType_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::Rewired::Mouse.get_screenPosition
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Mouse::*)()>(&::Rewired::Mouse::get_screenPosition)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181922f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.get_screenPositionPrev
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Mouse::*)()>(&::Rewired::Mouse::get_screenPositionPrev)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x181922ec0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.get_screenPositionDelta
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::Rewired::Mouse::*)()>(&::Rewired::Mouse::get_screenPositionDelta)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x181922e30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.get_deviceInstanceGuid
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::Rewired::Mouse::*)()>(&::Rewired::Mouse::get_deviceInstanceGuid)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x181922db0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Mouse*>(),
                    {::i2c::class_of<::Rewired::Mouse*>(), 4}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Mouse::*)(::StringW, ::Rewired::Interfaces::IUnifiedMouseSource*)>(&::Rewired::Mouse::_ctor)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x181922a00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedMouseSource*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Mouse::*)(int32_t, ::Rewired::InputSource, ::StringW, ::StringW, int32_t, int32_t, ::Rewired::HardwareControllerMap_Game*, ::Rewired::Controller_Extension*, ::Rewired::ControllerDataUpdater*)>(&::Rewired::Mouse::_ctor)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181922910;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.xOOQbXkNcmBVaQpYIKFgkKbAfKU
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Mouse::*)(::Rewired::UpdateLoopType)>(&::Rewired::Mouse::xOOQbXkNcmBVaQpYIKFgkKbAfKU)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1819230c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Mouse*>(),
                    {::i2c::class_of<::Rewired::Mouse*>(), 51}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.IsPolledAxisActive
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Mouse::*)(int32_t, ::by_ref<::Rewired::Pole>, ::by_ref<int32_t>)>(&::Rewired::Mouse::IsPolledAxisActive)> {
  constexpr static std::size_t size = 0x2e0;
  constexpr static std::size_t addrs = 0x1819225f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Mouse*>(),
                    {::i2c::class_of<::Rewired::Mouse*>(), 61}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.KAgjArDrUkuylcKsMBGAlEcEXGGY
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Mouse::*)()>(&::Rewired::Mouse::KAgjArDrUkuylcKsMBGAlEcEXGGY)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1819228d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Mouse*>(),
                    {::i2c::class_of<::Rewired::Mouse*>(), 53}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.efPLrMBIfJVNRoBBndZLcNUWramHA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Rewired::Mouse::*)(bool)>(&::Rewired::Mouse::efPLrMBIfJVNRoBBndZLcNUWramHA)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x181922c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::Rewired::Mouse*>(),
                    {::i2c::class_of<::Rewired::Mouse*>(), 54}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Mouse.qbvHjrzCagCJCDSxybFIUbLgeJaEA
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Mouse::*)()>(&::Rewired::Mouse::qbvHjrzCagCJCDSxybFIUbLgeJaEA)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x181922fa0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"qbvHjrzCagCJCDSxybFIUbLgeJaEA", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::Rewired::Utils::Classes::Utility::TimerAbs*& Rewired::Mouse::__cordl_internal_get_UzyguZCCxTPEunLCIBoGCYFcdqFLA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UzyguZCCxTPEunLCIBoGCYFcdqFLA;
}
constexpr ::Rewired::Utils::Classes::Utility::TimerAbs* const& Rewired::Mouse::__cordl_internal_get_UzyguZCCxTPEunLCIBoGCYFcdqFLA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___UzyguZCCxTPEunLCIBoGCYFcdqFLA;
}
constexpr void Rewired::Mouse::__cordl_internal_set_UzyguZCCxTPEunLCIBoGCYFcdqFLA(::Rewired::Utils::Classes::Utility::TimerAbs*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___UzyguZCCxTPEunLCIBoGCYFcdqFLA = value;
}
constexpr ::ArrayW<float_t>& Rewired::Mouse::__cordl_internal_get_toiRGxZVlrHEZfYkBVkLEKdWGxEZ()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toiRGxZVlrHEZfYkBVkLEKdWGxEZ;
}
constexpr ::ArrayW<float_t> const& Rewired::Mouse::__cordl_internal_get_toiRGxZVlrHEZfYkBVkLEKdWGxEZ() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___toiRGxZVlrHEZfYkBVkLEKdWGxEZ;
}
constexpr void Rewired::Mouse::__cordl_internal_set_toiRGxZVlrHEZfYkBVkLEKdWGxEZ(::ArrayW<float_t>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___toiRGxZVlrHEZfYkBVkLEKdWGxEZ = value;
}
constexpr ::UnityEngine::Vector2& Rewired::Mouse::__cordl_internal_get_pZHZOUWbXXgxTTQCoxYqRVnEpZUd()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pZHZOUWbXXgxTTQCoxYqRVnEpZUd;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Mouse::__cordl_internal_get_pZHZOUWbXXgxTTQCoxYqRVnEpZUd() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___pZHZOUWbXXgxTTQCoxYqRVnEpZUd;
}
constexpr void Rewired::Mouse::__cordl_internal_set_pZHZOUWbXXgxTTQCoxYqRVnEpZUd(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___pZHZOUWbXXgxTTQCoxYqRVnEpZUd = value;
}
constexpr ::UnityEngine::Vector2& Rewired::Mouse::__cordl_internal_get_tQnlsVbflpgfmTMLrGWCpGZCwPPR()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tQnlsVbflpgfmTMLrGWCpGZCwPPR;
}
constexpr ::UnityEngine::Vector2 const& Rewired::Mouse::__cordl_internal_get_tQnlsVbflpgfmTMLrGWCpGZCwPPR() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___tQnlsVbflpgfmTMLrGWCpGZCwPPR;
}
constexpr void Rewired::Mouse::__cordl_internal_set_tQnlsVbflpgfmTMLrGWCpGZCwPPR(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___tQnlsVbflpgfmTMLrGWCpGZCwPPR = value;
}
constexpr int32_t& Rewired::Mouse::__cordl_internal_get_BiHdxzYdywLLDPMIcOeStrQXLAKA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiHdxzYdywLLDPMIcOeStrQXLAKA;
}
constexpr int32_t const& Rewired::Mouse::__cordl_internal_get_BiHdxzYdywLLDPMIcOeStrQXLAKA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___BiHdxzYdywLLDPMIcOeStrQXLAKA;
}
constexpr void Rewired::Mouse::__cordl_internal_set_BiHdxzYdywLLDPMIcOeStrQXLAKA(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___BiHdxzYdywLLDPMIcOeStrQXLAKA = value;
}
constexpr ::Rewired::Interfaces::IUnifiedMouseSource*& Rewired::Mouse::__cordl_internal_get_WAOZvOeKIYHZvArvSgvHutknPKrh()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WAOZvOeKIYHZvArvSgvHutknPKrh;
}
constexpr ::Rewired::Interfaces::IUnifiedMouseSource* const& Rewired::Mouse::__cordl_internal_get_WAOZvOeKIYHZvArvSgvHutknPKrh() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___WAOZvOeKIYHZvArvSgvHutknPKrh;
}
constexpr void Rewired::Mouse::__cordl_internal_set_WAOZvOeKIYHZvArvSgvHutknPKrh(::Rewired::Interfaces::IUnifiedMouseSource*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___WAOZvOeKIYHZvArvSgvHutknPKrh = value;
}
inline void Rewired::Mouse::setStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ(::System::Guid  value)  {
::cordl_internals::setStaticField<::System::Guid, "xGTQYAzirxuJSrcuKmNyJyMiEjxQ", ::Rewired::Mouse*>(std::forward<::System::Guid>(value));
}
inline ::System::Guid Rewired::Mouse::getStaticF_xGTQYAzirxuJSrcuKmNyJyMiEjxQ()  {
return ::cordl_internals::getStaticField<::System::Guid, "xGTQYAzirxuJSrcuKmNyJyMiEjxQ", ::Rewired::Mouse*>();
}
inline ::UnityEngine::Vector2 Rewired::Mouse::get_screenPosition()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPosition", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Mouse::get_screenPositionPrev()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPositionPrev", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 Rewired::Mouse::get_screenPositionDelta()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"get_screenPositionDelta", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline ::System::Guid Rewired::Mouse::get_deviceInstanceGuid()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Mouse*>(), 4}
                        )));
return ::cordl_internals::RunMethodRethrow<::System::Guid>(this, ___internal_method);
}
inline void Rewired::Mouse::_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_1)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {".ctor", {}, {::i2c::type_of<::StringW>(), ::i2c::type_of<::Rewired::Interfaces::IUnifiedMouseSource*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1);
}
inline void Rewired::Mouse::_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_8)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {".ctor", {}, {::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::InputSource>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Rewired::HardwareControllerMap_Game*>(), ::i2c::type_of<::Rewired::Controller_Extension*>(), ::i2c::type_of<::Rewired::ControllerDataUpdater*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8);
}
inline void Rewired::Mouse::xOOQbXkNcmBVaQpYIKFgkKbAfKU(::Rewired::UpdateLoopType  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Mouse*>(), 51}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline bool Rewired::Mouse::IsPolledAxisActive(int32_t  index, ::by_ref<::Rewired::Pole>  pole, ::by_ref<int32_t>  elementIdentifierId)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Mouse*>(), 61}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, index, pole, elementIdentifierId);
}
inline void Rewired::Mouse::KAgjArDrUkuylcKsMBGAlEcEXGGY()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Mouse*>(), 53}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Rewired::Mouse::efPLrMBIfJVNRoBBndZLcNUWramHA(bool  _cordl_fixed_empty_name_whitespace)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::Rewired::Mouse*>(), 54}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, _cordl_fixed_empty_name_whitespace);
}
inline void Rewired::Mouse::qbvHjrzCagCJCDSxybFIUbLgeJaEA()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Mouse*>(),
                        {"qbvHjrzCagCJCDSxybFIUbLgeJaEA", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Mouse* Rewired::Mouse::New_ctor(::StringW  _cordl_fixed_empty_name_whitespace, ::Rewired::Interfaces::IUnifiedMouseSource*  _cordl_fixed_empty_name_whitespace_param_1)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Mouse*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1));
}
inline ::Rewired::Mouse* Rewired::Mouse::New_ctor(int32_t  _cordl_fixed_empty_name_whitespace, ::Rewired::InputSource  _cordl_fixed_empty_name_whitespace_param_1, ::StringW  _cordl_fixed_empty_name_whitespace_param_2, ::StringW  _cordl_fixed_empty_name_whitespace_param_3, int32_t  _cordl_fixed_empty_name_whitespace_param_4, int32_t  _cordl_fixed_empty_name_whitespace_param_5, ::Rewired::HardwareControllerMap_Game*  _cordl_fixed_empty_name_whitespace_param_6, ::Rewired::Controller_Extension*  _cordl_fixed_empty_name_whitespace_param_7, ::Rewired::ControllerDataUpdater*  _cordl_fixed_empty_name_whitespace_param_8)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Mouse*>(_cordl_fixed_empty_name_whitespace, _cordl_fixed_empty_name_whitespace_param_1, _cordl_fixed_empty_name_whitespace_param_2, _cordl_fixed_empty_name_whitespace_param_3, _cordl_fixed_empty_name_whitespace_param_4, _cordl_fixed_empty_name_whitespace_param_5, _cordl_fixed_empty_name_whitespace_param_6, _cordl_fixed_empty_name_whitespace_param_7, _cordl_fixed_empty_name_whitespace_param_8));
}
// Ctor Parameters []
constexpr ::Rewired::Mouse::Mouse()   {
}
