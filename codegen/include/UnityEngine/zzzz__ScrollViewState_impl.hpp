#pragma once
// IWYU pragma private; include "UnityEngine/ScrollViewState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/zzzz__ScrollViewState_def.hpp"
//  Writing Method size for method: ::UnityEngine::ScrollViewState._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::ScrollViewState::*)()>(&::UnityEngine::ScrollViewState::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScrollViewState*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Rect& UnityEngine::ScrollViewState::__cordl_internal_get_position()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr ::UnityEngine::Rect const& UnityEngine::ScrollViewState::__cordl_internal_get_position() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___position;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_position(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___position = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::ScrollViewState::__cordl_internal_get_visibleRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::ScrollViewState::__cordl_internal_get_visibleRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___visibleRect;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_visibleRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___visibleRect = value;
}
constexpr ::UnityEngine::Rect& UnityEngine::ScrollViewState::__cordl_internal_get_viewRect()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewRect;
}
constexpr ::UnityEngine::Rect const& UnityEngine::ScrollViewState::__cordl_internal_get_viewRect() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___viewRect;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_viewRect(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___viewRect = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ScrollViewState::__cordl_internal_get_scrollPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ScrollViewState::__cordl_internal_get_scrollPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___scrollPosition;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_scrollPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___scrollPosition = value;
}
constexpr bool& UnityEngine::ScrollViewState::__cordl_internal_get_apply()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr bool const& UnityEngine::ScrollViewState::__cordl_internal_get_apply() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___apply;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_apply(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___apply = value;
}
constexpr bool& UnityEngine::ScrollViewState::__cordl_internal_get_isDuringTouchScroll()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDuringTouchScroll;
}
constexpr bool const& UnityEngine::ScrollViewState::__cordl_internal_get_isDuringTouchScroll() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___isDuringTouchScroll;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_isDuringTouchScroll(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___isDuringTouchScroll = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ScrollViewState::__cordl_internal_get_touchScrollStartMousePosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchScrollStartMousePosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ScrollViewState::__cordl_internal_get_touchScrollStartMousePosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchScrollStartMousePosition;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_touchScrollStartMousePosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchScrollStartMousePosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ScrollViewState::__cordl_internal_get_touchScrollStartPosition()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchScrollStartPosition;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ScrollViewState::__cordl_internal_get_touchScrollStartPosition() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___touchScrollStartPosition;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_touchScrollStartPosition(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___touchScrollStartPosition = value;
}
constexpr ::UnityEngine::Vector2& UnityEngine::ScrollViewState::__cordl_internal_get_velocity()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr ::UnityEngine::Vector2 const& UnityEngine::ScrollViewState::__cordl_internal_get_velocity() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___velocity;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_velocity(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___velocity = value;
}
constexpr float_t& UnityEngine::ScrollViewState::__cordl_internal_get_previousTimeSinceStartup()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTimeSinceStartup;
}
constexpr float_t const& UnityEngine::ScrollViewState::__cordl_internal_get_previousTimeSinceStartup() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___previousTimeSinceStartup;
}
constexpr void UnityEngine::ScrollViewState::__cordl_internal_set_previousTimeSinceStartup(float_t  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___previousTimeSinceStartup = value;
}
inline void UnityEngine::ScrollViewState::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::UnityEngine::ScrollViewState*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::ScrollViewState* UnityEngine::ScrollViewState::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::ScrollViewState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::ScrollViewState::ScrollViewState()   {
}
