#pragma once
// IWYU pragma private; include "Rewired/Internal/OnGUIHelper.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Rewired/Internal/zzzz__OnGUIHelper_def.hpp"
#include "Rewired/zzzz__InputManager_Base_def.hpp"
//  Writing Method size for method: ::Rewired::Internal::OnGUIHelper.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::OnGUIHelper::*)()>(&::Rewired::Internal::OnGUIHelper::Awake)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1818f3a80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::OnGUIHelper.OnGUI
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::OnGUIHelper::*)()>(&::Rewired::Internal::OnGUIHelper::OnGUI)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1818f3ab0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {"OnGUI", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Rewired::Internal::OnGUIHelper._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Rewired::Internal::OnGUIHelper::*)()>(&::Rewired::Internal::OnGUIHelper::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Rewired::InputManager_Base>& Rewired::Internal::OnGUIHelper::__cordl_internal_get_KpnNGsKLWUAxqlRFpIcLAvJVpshfA()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KpnNGsKLWUAxqlRFpIcLAvJVpshfA;
}
constexpr ::UnityW<::Rewired::InputManager_Base> const& Rewired::Internal::OnGUIHelper::__cordl_internal_get_KpnNGsKLWUAxqlRFpIcLAvJVpshfA() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___KpnNGsKLWUAxqlRFpIcLAvJVpshfA;
}
constexpr void Rewired::Internal::OnGUIHelper::__cordl_internal_set_KpnNGsKLWUAxqlRFpIcLAvJVpshfA(::UnityW<::Rewired::InputManager_Base>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___KpnNGsKLWUAxqlRFpIcLAvJVpshfA = value;
}
inline void Rewired::Internal::OnGUIHelper::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::OnGUIHelper::OnGUI()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {"OnGUI", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Rewired::Internal::OnGUIHelper::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Rewired::Internal::OnGUIHelper*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Rewired::Internal::OnGUIHelper* Rewired::Internal::OnGUIHelper::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Rewired::Internal::OnGUIHelper*>());
}
// Ctor Parameters []
constexpr ::Rewired::Internal::OnGUIHelper::OnGUIHelper()   {
}
