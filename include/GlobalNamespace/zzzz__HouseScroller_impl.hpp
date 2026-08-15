#pragma once
// IWYU pragma private; include "GlobalNamespace/HouseScroller.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__HouseScroller_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.get_currentStep
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::get_currentStep)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1803d4dd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"get_currentStep", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::Update)> {
  constexpr static std::size_t size = 0x2c0;
  constexpr static std::size_t addrs = 0x1804228a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.RecordSelectionScroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::RecordSelectionScroll)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804227b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"RecordSelectionScroll", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.DeselectIfRequired
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::DeselectIfRequired)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x180422710;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"DeselectIfRequired", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.OnEnable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::OnEnable)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804227a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"OnEnable", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.Reset
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::Reset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1804227a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Reset", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller.Scroll
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)(int32_t)>(&::GlobalNamespace::HouseScroller::Scroll)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804227e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Scroll", {}, {::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HouseScroller._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HouseScroller::*)()>(&::GlobalNamespace::HouseScroller::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd7c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::HouseScroller::__cordl_internal_get_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::HouseScroller::__cordl_internal_get_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___rectTransform;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___rectTransform = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& GlobalNamespace::HouseScroller::__cordl_internal_get_containerTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& GlobalNamespace::HouseScroller::__cordl_internal_get_containerTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___containerTransform;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_containerTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___containerTransform = value;
}
constexpr float_t& GlobalNamespace::HouseScroller::__cordl_internal_get_stepDistance()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepDistance;
}
constexpr float_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_stepDistance() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___stepDistance;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_stepDistance(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___stepDistance = value;
}
constexpr int32_t& GlobalNamespace::HouseScroller::__cordl_internal_get_maxSteps()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSteps;
}
constexpr int32_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_maxSteps() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___maxSteps;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_maxSteps(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___maxSteps = value;
}
constexpr float_t& GlobalNamespace::HouseScroller::__cordl_internal_get_upThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upThreshold;
}
constexpr float_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_upThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___upThreshold;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_upThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___upThreshold = value;
}
constexpr float_t& GlobalNamespace::HouseScroller::__cordl_internal_get_downThreshold()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downThreshold;
}
constexpr float_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_downThreshold() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___downThreshold;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_downThreshold(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___downThreshold = value;
}
constexpr float_t& GlobalNamespace::HouseScroller::__cordl_internal_get_hoverRepeatInterval()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRepeatInterval;
}
constexpr float_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_hoverRepeatInterval() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___hoverRepeatInterval;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_hoverRepeatInterval(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___hoverRepeatInterval = value;
}
constexpr bool& GlobalNamespace::HouseScroller::__cordl_internal_get_logVerbose()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr bool const& GlobalNamespace::HouseScroller::__cordl_internal_get_logVerbose() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___logVerbose;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_logVerbose(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___logVerbose = value;
}
constexpr int32_t& GlobalNamespace::HouseScroller::__cordl_internal_get__currentStep()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStep;
}
constexpr int32_t const& GlobalNamespace::HouseScroller::__cordl_internal_get__currentStep() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____currentStep;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set__currentStep(int32_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____currentStep = value;
}
constexpr float_t& GlobalNamespace::HouseScroller::__cordl_internal_get_timeLastHoverScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastHoverScroll;
}
constexpr float_t const& GlobalNamespace::HouseScroller::__cordl_internal_get_timeLastHoverScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___timeLastHoverScroll;
}
constexpr void GlobalNamespace::HouseScroller::__cordl_internal_set_timeLastHoverScroll(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___timeLastHoverScroll = value;
}
inline int32_t GlobalNamespace::HouseScroller::get_currentStep()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"get_currentStep", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::RecordSelectionScroll()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"RecordSelectionScroll", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::DeselectIfRequired()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"DeselectIfRequired", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::OnEnable()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"OnEnable", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::Reset()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Reset", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HouseScroller::Scroll(int32_t  steps)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {"Scroll", {}, {::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, steps);
}
inline void GlobalNamespace::HouseScroller::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::HouseScroller*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HouseScroller* GlobalNamespace::HouseScroller::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HouseScroller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HouseScroller::HouseScroller()   {
}
