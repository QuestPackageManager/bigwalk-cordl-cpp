#pragma once
// IWYU pragma private; include "Graphy/Runtime/UI/G_SafeArea.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Rect_impl.hpp"
#include "Graphy/Runtime/UI/zzzz__G_SafeArea_def.hpp"
#include "UnityEngine/zzzz__RectTransform_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
//  Writing Method size for method: ::Graphy::Runtime::UI::G_SafeArea.Awake
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Graphy::Runtime::UI::G_SafeArea::*)()>(&::Graphy::Runtime::UI::G_SafeArea::Awake)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x181e53a10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Awake", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Graphy::Runtime::UI::G_SafeArea.Update
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Graphy::Runtime::UI::G_SafeArea::*)()>(&::Graphy::Runtime::UI::G_SafeArea::Update)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x181e53c00;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Update", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Graphy::Runtime::UI::G_SafeArea.Refresh
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Graphy::Runtime::UI::G_SafeArea::*)()>(&::Graphy::Runtime::UI::G_SafeArea::Refresh)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x181e53a50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Refresh", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Graphy::Runtime::UI::G_SafeArea.ApplySafeArea
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Graphy::Runtime::UI::G_SafeArea::*)(::UnityEngine::Rect)>(&::Graphy::Runtime::UI::G_SafeArea::ApplySafeArea)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x181e538e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"ApplySafeArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Graphy::Runtime::UI::G_SafeArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Graphy::Runtime::UI::G_SafeArea::*)()>(&::Graphy::Runtime::UI::G_SafeArea::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x181e53c10;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_conformX()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_conformX;
}
constexpr bool const& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_conformX() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_conformX;
}
constexpr void Graphy::Runtime::UI::G_SafeArea::__cordl_internal_set_m_conformX(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_conformX = value;
}
constexpr bool& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_conformY()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_conformY;
}
constexpr bool const& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_conformY() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_conformY;
}
constexpr void Graphy::Runtime::UI::G_SafeArea::__cordl_internal_set_m_conformY(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_conformY = value;
}
constexpr ::UnityW<::UnityEngine::RectTransform>& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_rectTransform()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rectTransform;
}
constexpr ::UnityW<::UnityEngine::RectTransform> const& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_rectTransform() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_rectTransform;
}
constexpr void Graphy::Runtime::UI::G_SafeArea::__cordl_internal_set_m_rectTransform(::UnityW<::UnityEngine::RectTransform>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_rectTransform = value;
}
constexpr ::UnityEngine::Rect& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_lastSafeArea()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastSafeArea;
}
constexpr ::UnityEngine::Rect const& Graphy::Runtime::UI::G_SafeArea::__cordl_internal_get_m_lastSafeArea() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___m_lastSafeArea;
}
constexpr void Graphy::Runtime::UI::G_SafeArea::__cordl_internal_set_m_lastSafeArea(::UnityEngine::Rect  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___m_lastSafeArea = value;
}
inline void Graphy::Runtime::UI::G_SafeArea::Awake()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Awake", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Graphy::Runtime::UI::G_SafeArea::Update()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Update", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Graphy::Runtime::UI::G_SafeArea::Refresh()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"Refresh", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Graphy::Runtime::UI::G_SafeArea::ApplySafeArea(::UnityEngine::Rect  r)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {"ApplySafeArea", {}, {::i2c::type_of<::UnityEngine::Rect>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, r);
}
inline void Graphy::Runtime::UI::G_SafeArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::Graphy::Runtime::UI::G_SafeArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Graphy::Runtime::UI::G_SafeArea* Graphy::Runtime::UI::G_SafeArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Graphy::Runtime::UI::G_SafeArea*>());
}
// Ctor Parameters []
constexpr ::Graphy::Runtime::UI::G_SafeArea::G_SafeArea()   {
}
