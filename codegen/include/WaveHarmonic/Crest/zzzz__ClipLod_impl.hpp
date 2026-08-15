#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ClipLod.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultClippingState_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__ClipLod_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultClippingState_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553730;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182553740;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825530c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1825536f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_RequiresClearBorder
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_RequiresClearBorder)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 17}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_SkipEndOfFrame
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_SkipEndOfFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 18}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x1825536d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553100;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::ClipLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182553570;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.SetDefaultClippingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLod::*)(::WaveHarmonic::Crest::DefaultClippingState, ::WaveHarmonic::Crest::DefaultClippingState)>(&::WaveHarmonic::Crest::ClipLod::SetDefaultClippingState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x1825535c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"SetDefaultClippingState", {}, {::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>(), ::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.get_DefaultClippingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::DefaultClippingState (::WaveHarmonic::Crest::ClipLod::*)()>(&::WaveHarmonic::Crest::ClipLod::get_DefaultClippingState)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180408b50;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"get_DefaultClippingState", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::ClipLod.set_DefaultClippingState
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::ClipLod::*)(::WaveHarmonic::Crest::DefaultClippingState)>(&::WaveHarmonic::Crest::ClipLod::set_DefaultClippingState)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182553790;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"set_DefaultClippingState", {}, {::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::DefaultClippingState& WaveHarmonic::Crest::ClipLod::__cordl_internal_get__DefaultClippingState()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultClippingState;
}
constexpr ::WaveHarmonic::Crest::DefaultClippingState const& WaveHarmonic::Crest::ClipLod::__cordl_internal_get__DefaultClippingState() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DefaultClippingState;
}
constexpr void WaveHarmonic::Crest::ClipLod::__cordl_internal_set__DefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DefaultClippingState = value;
}
inline void WaveHarmonic::Crest::ClipLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ClipLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ClipLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::ClipLod*>();
}
inline void WaveHarmonic::Crest::ClipLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ClipLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ClipLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::ClipLod*>();
}
inline ::StringW WaveHarmonic::Crest::ClipLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::ClipLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ClipLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::ClipLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLod::get_RequiresClearBorder()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 17}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::ClipLod::get_SkipEndOfFrame()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 18}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::ClipLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::ClipLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLod::SetDefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  previous, ::WaveHarmonic::Crest::DefaultClippingState  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"SetDefaultClippingState", {}, {::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>(), ::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline ::WaveHarmonic::Crest::DefaultClippingState WaveHarmonic::Crest::ClipLod::get_DefaultClippingState()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"get_DefaultClippingState", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::DefaultClippingState>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::ClipLod::set_DefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::ClipLod*>(),
                        {"set_DefaultClippingState", {}, {::i2c::type_of<::WaveHarmonic::Crest::DefaultClippingState>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::ClipLod* WaveHarmonic::Crest::ClipLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::ClipLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::ClipLod::ClipLod()   {
}
