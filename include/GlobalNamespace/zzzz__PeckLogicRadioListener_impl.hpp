#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckLogicRadioListener.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__PeckLogicRadioListener_def.hpp"
#include "GlobalNamespace/zzzz__RadioVoiceAssigner_def.hpp"
#include "GlobalNamespace/zzzz__TrackedPeckState_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckLogicRadioListener.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicRadioListener::*)()>(&::GlobalNamespace::PeckLogicRadioListener::Awake)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x180450a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckLogicRadioListener.OnChange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicRadioListener::*)(::GlobalNamespace::RadioVoiceAssigner*)>(&::GlobalNamespace::PeckLogicRadioListener::OnChange)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x180450b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckLogicRadioListener._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckLogicRadioListener::*)()>(&::GlobalNamespace::PeckLogicRadioListener::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState>& GlobalNamespace::PeckLogicRadioListener::__cordl_internal_get_outputSystem()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSystem;
}
constexpr ::UnityW<::GlobalNamespace::TrackedPeckState> const& GlobalNamespace::PeckLogicRadioListener::__cordl_internal_get_outputSystem() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___outputSystem;
}
constexpr void GlobalNamespace::PeckLogicRadioListener::__cordl_internal_set_outputSystem(::UnityW<::GlobalNamespace::TrackedPeckState>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___outputSystem = value;
}
constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner>& GlobalNamespace::PeckLogicRadioListener::__cordl_internal_get_thisRadio()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRadio;
}
constexpr ::UnityW<::GlobalNamespace::RadioVoiceAssigner> const& GlobalNamespace::PeckLogicRadioListener::__cordl_internal_get_thisRadio() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___thisRadio;
}
constexpr void GlobalNamespace::PeckLogicRadioListener::__cordl_internal_set_thisRadio(::UnityW<::GlobalNamespace::RadioVoiceAssigner>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___thisRadio = value;
}
inline void GlobalNamespace::PeckLogicRadioListener::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PeckLogicRadioListener::OnChange(::GlobalNamespace::RadioVoiceAssigner*  changedAssigner)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {"OnChange", {}, {::i2c::type_of<::GlobalNamespace::RadioVoiceAssigner*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, changedAssigner);
}
inline void GlobalNamespace::PeckLogicRadioListener::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckLogicRadioListener*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckLogicRadioListener* GlobalNamespace::PeckLogicRadioListener::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckLogicRadioListener*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckLogicRadioListener::PeckLogicRadioListener()   {
}
