#pragma once
// IWYU pragma private; include "GlobalNamespace/TimerDialDisplay.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__TimerDialDisplay_def.hpp"
#include "GlobalNamespace/zzzz__TimerDialController_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TimerDialDisplay.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialDisplay::*)()>(&::GlobalNamespace::TimerDialDisplay::Update)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x180419480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialDisplay*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TimerDialDisplay._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::TimerDialDisplay::*)()>(&::GlobalNamespace::TimerDialDisplay::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialDisplay*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& GlobalNamespace::TimerDialDisplay::__cordl_internal_get_dialTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& GlobalNamespace::TimerDialDisplay::__cordl_internal_get_dialTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dialTransform;
}
constexpr void GlobalNamespace::TimerDialDisplay::__cordl_internal_set_dialTransform(::UnityW<::UnityEngine::Transform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dialTransform = value;
}
constexpr ::UnityW<::GlobalNamespace::TimerDialController>& GlobalNamespace::TimerDialDisplay::__cordl_internal_get_timerDialController()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDialController;
}
constexpr ::UnityW<::GlobalNamespace::TimerDialController> const& GlobalNamespace::TimerDialDisplay::__cordl_internal_get_timerDialController() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timerDialController;
}
constexpr void GlobalNamespace::TimerDialDisplay::__cordl_internal_set_timerDialController(::UnityW<::GlobalNamespace::TimerDialController>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timerDialController = value;
}
inline void GlobalNamespace::TimerDialDisplay::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialDisplay*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::TimerDialDisplay::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::TimerDialDisplay*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::TimerDialDisplay* GlobalNamespace::TimerDialDisplay::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::TimerDialDisplay*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TimerDialDisplay::TimerDialDisplay()   {
}
