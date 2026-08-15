#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LevelLodInput.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__LevelLodInput_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IReportsHeight_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LevelLodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInputMode_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput_Reporter._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput_Reporter::*)(::WaveHarmonic::Crest::LevelLodInput*)>(&::WaveHarmonic::Crest::LevelLodInput_Reporter::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::LevelLodInput*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput_Reporter.ReportHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LevelLodInput_Reporter::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::LevelLodInput_Reporter::ReportHeight)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x18255bdf0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput_Reporter*>(),
                        {"ReportHeight", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::UnityW<::WaveHarmonic::Crest::LevelLodInput>& WaveHarmonic::Crest::LevelLodInput_Reporter::__cordl_internal_get__Input()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr ::UnityW<::WaveHarmonic::Crest::LevelLodInput> const& WaveHarmonic::Crest::LevelLodInput_Reporter::__cordl_internal_get__Input() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Input;
}
constexpr void WaveHarmonic::Crest::LevelLodInput_Reporter::__cordl_internal_set__Input(::UnityW<::WaveHarmonic::Crest::LevelLodInput>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Input = value;
}
inline void WaveHarmonic::Crest::LevelLodInput_Reporter::_ctor(::WaveHarmonic::Crest::LevelLodInput*  input)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput_Reporter*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::LevelLodInput*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, input);
}
inline bool WaveHarmonic::Crest::LevelLodInput_Reporter::ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput_Reporter*>(),
                        {"ReportHeight", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, minimum, maximum);
}
inline ::WaveHarmonic::Crest::LevelLodInput_Reporter* WaveHarmonic::Crest::LevelLodInput_Reporter::New_ctor(::WaveHarmonic::Crest::LevelLodInput*  input)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LevelLodInput_Reporter*>(input));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::IReportsHeight"
constexpr  WaveHarmonic::Crest::LevelLodInput_Reporter::operator ::WaveHarmonic::Crest::IReportsHeight*() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsHeight*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::IReportsHeight"
constexpr ::WaveHarmonic::Crest::IReportsHeight* WaveHarmonic::Crest::LevelLodInput_Reporter::i___WaveHarmonic__Crest__IReportsHeight() noexcept {
return static_cast<::WaveHarmonic::Crest::IReportsHeight*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LevelLodInput_Reporter::LevelLodInput_Reporter()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255a360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 21}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x18255a3a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 23}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x18255a2d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_FollowHorizontalMotion
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_FollowHorizontalMotion)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 27}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_DefaultMode
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::LodInputMode (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_DefaultMode)> {
  constexpr static std::size_t size = 0x28d50;
  constexpr static std::size_t addrs = 0x180feb5f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 22}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.InferBlend
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::InferBlend)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182559f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 34}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.Initialize
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::Initialize)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x182559f90;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.OnDisable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::OnDisable)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x18255a040;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.ReportHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LevelLodInput::*)(::WaveHarmonic::Crest::WaterRenderer*, ::by_ref<::UnityEngine::Rect>, ::by_ref<float_t>, ::by_ref<float_t>)>(&::WaveHarmonic::Crest::LevelLodInput::ReportHeight)> {
  constexpr static std::size_t size = 0x200;
  constexpr static std::size_t addrs = 0x18255a0d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"ReportHeight", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_Version
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_Version)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182550980;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.OnMigrate
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::OnMigrate)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x18255a0b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 15}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_HeightRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_HeightRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d59d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"get_HeightRange", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.set_HeightRange
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)(::UnityEngine::Vector2)>(&::WaveHarmonic::Crest::LevelLodInput::set_HeightRange)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817d5a60;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"set_HeightRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.get_OverrideHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::LevelLodInput::*)()>(&::WaveHarmonic::Crest::LevelLodInput::get_OverrideHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"get_OverrideHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::LevelLodInput.set_OverrideHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::LevelLodInput::*)(bool)>(&::WaveHarmonic::Crest::LevelLodInput::set_OverrideHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"set_OverrideHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__OverrideHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideHeight;
}
constexpr bool const& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__OverrideHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____OverrideHeight;
}
constexpr void WaveHarmonic::Crest::LevelLodInput::__cordl_internal_set__OverrideHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____OverrideHeight = value;
}
constexpr ::UnityEngine::Vector2& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__HeightRange()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightRange;
}
constexpr ::UnityEngine::Vector2 const& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__HeightRange() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____HeightRange;
}
constexpr void WaveHarmonic::Crest::LevelLodInput::__cordl_internal_set__HeightRange(::UnityEngine::Vector2  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____HeightRange = value;
}
constexpr ::WaveHarmonic::Crest::LevelLodInput_Reporter*& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__Reporter()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr ::WaveHarmonic::Crest::LevelLodInput_Reporter* const& WaveHarmonic::Crest::LevelLodInput::__cordl_internal_get__Reporter() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Reporter;
}
constexpr void WaveHarmonic::Crest::LevelLodInput::__cordl_internal_set__Reporter(::WaveHarmonic::Crest::LevelLodInput_Reporter*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Reporter = value;
}
inline ::UnityEngine::Color WaveHarmonic::Crest::LevelLodInput::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 21}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::LevelLodInput::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 23}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LevelLodInput::get_FollowHorizontalMotion()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 27}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::LodInputMode WaveHarmonic::Crest::LevelLodInput::get_DefaultMode()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 22}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::LodInputMode>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::InferBlend()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 34}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::Initialize()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::OnDisable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::LevelLodInput::ReportHeight(::WaveHarmonic::Crest::WaterRenderer*  water, ::by_ref<::UnityEngine::Rect>  bounds, ::by_ref<float_t>  minimum, ::by_ref<float_t>  maximum)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"ReportHeight", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<::by_ref<::UnityEngine::Rect>>(), ::i2c::type_of<::by_ref<float_t>>(), ::i2c::type_of<::by_ref<float_t>>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, water, bounds, minimum, maximum);
}
inline int32_t WaveHarmonic::Crest::LevelLodInput::get_Version()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::OnMigrate()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(), 15}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector2 WaveHarmonic::Crest::LevelLodInput::get_HeightRange()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"get_HeightRange", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::set_HeightRange(::UnityEngine::Vector2  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"set_HeightRange", {}, {::i2c::type_of<::UnityEngine::Vector2>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::LevelLodInput::get_OverrideHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"get_OverrideHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::LevelLodInput::set_OverrideHeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::LevelLodInput*>(),
                        {"set_OverrideHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::LevelLodInput* WaveHarmonic::Crest::LevelLodInput::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::LevelLodInput*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::LevelLodInput::LevelLodInput()   {
}
