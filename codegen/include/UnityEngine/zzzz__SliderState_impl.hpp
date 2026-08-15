#pragma once
// IWYU pragma private; include "UnityEngine/SliderState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__SliderState_def.hpp"
//  Writing Method size for method: ::UnityEngine::SliderState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::SliderState::*)()>(&::UnityEngine::SliderState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr float_t& UnityEngine::SliderState::__cordl_internal_get_dragStartPos()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragStartPos;
}
constexpr float_t const& UnityEngine::SliderState::__cordl_internal_get_dragStartPos() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragStartPos;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_dragStartPos(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragStartPos = value;
}
constexpr float_t& UnityEngine::SliderState::__cordl_internal_get_dragStartValue()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragStartValue;
}
constexpr float_t const& UnityEngine::SliderState::__cordl_internal_get_dragStartValue() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___dragStartValue;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_dragStartValue(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___dragStartValue = value;
}
constexpr bool& UnityEngine::SliderState::__cordl_internal_get_isDragging()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDragging;
}
constexpr bool const& UnityEngine::SliderState::__cordl_internal_get_isDragging() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDragging;
}
constexpr void UnityEngine::SliderState::__cordl_internal_set_isDragging(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDragging = value;
}
inline void UnityEngine::SliderState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::SliderState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::SliderState* UnityEngine::SliderState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::SliderState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::SliderState::SliderState()   {
}
