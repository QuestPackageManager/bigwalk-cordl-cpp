#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/PaintFalloffArea.hpp"
#include "JBooth/MicroVerseCore/zzzz__Stamp_impl.hpp"
#include "JBooth/MicroVerseCore/zzzz__PaintFalloffArea_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__FalloffFilter_def.hpp"
#include "JBooth/MicroVerseCore/zzzz__IModifier_def.hpp"
#include "UnityEngine/zzzz__Bounds_def.hpp"
//  Writing Method size for method: ::JBooth::MicroVerseCore::PaintFalloffArea.Dispose
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::PaintFalloffArea::*)()>(&::JBooth::MicroVerseCore::PaintFalloffArea::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"Dispose", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PaintFalloffArea.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::PaintFalloffArea::*)()>(&::JBooth::MicroVerseCore::PaintFalloffArea::Initialize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802d9d80;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"Initialize", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PaintFalloffArea.GetBounds
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Bounds (::JBooth::MicroVerseCore::PaintFalloffArea::*)()>(&::JBooth::MicroVerseCore::PaintFalloffArea::GetBounds)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x181446c40;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                    {::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(), 6}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PaintFalloffArea.OnDrawGizmosSelected
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::PaintFalloffArea::*)()>(&::JBooth::MicroVerseCore::PaintFalloffArea::OnDrawGizmosSelected)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x181446c70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::JBooth::MicroVerseCore::PaintFalloffArea._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::JBooth::MicroVerseCore::PaintFalloffArea::*)()>(&::JBooth::MicroVerseCore::PaintFalloffArea::_ctor)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x181446d60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask*& JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_get_paintMask()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintMask;
}
constexpr ::JBooth::MicroVerseCore::FalloffFilter_PaintMask* const& JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_get_paintMask() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___paintMask;
}
constexpr void JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_set_paintMask(::JBooth::MicroVerseCore::FalloffFilter_PaintMask*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___paintMask = value;
}
constexpr bool& JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_get_clampOutsideOfBounds()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampOutsideOfBounds;
}
constexpr bool const& JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_get_clampOutsideOfBounds() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->___clampOutsideOfBounds;
}
constexpr void JBooth::MicroVerseCore::PaintFalloffArea::__cordl_internal_set_clampOutsideOfBounds(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->___clampOutsideOfBounds = value;
}
inline void JBooth::MicroVerseCore::PaintFalloffArea::Dispose()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"Dispose", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::PaintFalloffArea::Initialize()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"Initialize", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bounds JBooth::MicroVerseCore::PaintFalloffArea::GetBounds()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(), 6}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Bounds>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::PaintFalloffArea::OnDrawGizmosSelected()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {"OnDrawGizmosSelected", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void JBooth::MicroVerseCore::PaintFalloffArea::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::JBooth::MicroVerseCore::PaintFalloffArea*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::JBooth::MicroVerseCore::PaintFalloffArea* JBooth::MicroVerseCore::PaintFalloffArea::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::JBooth::MicroVerseCore::PaintFalloffArea*>());
}
/// @brief Convert operator to "::JBooth::MicroVerseCore::IModifier"
constexpr  JBooth::MicroVerseCore::PaintFalloffArea::operator ::JBooth::MicroVerseCore::IModifier*() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
/// @brief Convert to "::JBooth::MicroVerseCore::IModifier"
constexpr ::JBooth::MicroVerseCore::IModifier* JBooth::MicroVerseCore::PaintFalloffArea::i___JBooth__MicroVerseCore__IModifier() noexcept {
return static_cast<::JBooth::MicroVerseCore::IModifier*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::JBooth::MicroVerseCore::PaintFalloffArea::PaintFalloffArea()   {
}
