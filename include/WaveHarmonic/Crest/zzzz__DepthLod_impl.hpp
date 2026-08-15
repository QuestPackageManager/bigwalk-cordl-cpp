#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthLod.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Color_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_impl.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthLod_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/Experimental/Rendering/zzzz__GraphicsFormat_def.hpp"
#include "UnityEngine/Rendering/zzzz__CommandBuffer_def.hpp"
#include "UnityEngine/Rendering/zzzz__RenderTargetIdentifier_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include "UnityEngine/zzzz__Terrain_def.hpp"
#include "UnityEngine/zzzz__Texture2DArray_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__SortedList_2_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DepthLod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__IDepthProvider_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ILodInput_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "WaveHarmonic/Crest/zzzz__WaterRenderer_def.hpp"
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_Enabled
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Enabled)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x182563ca0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_IsCompute
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_IsCompute)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_Queue
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Queue)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x182537df0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Queue", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_Pass
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Pass)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180393450;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Pass", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_Rect
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Rect (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Rect)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x1821aa7b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Rect", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.get_Component
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::MonoBehaviour> (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)()>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Component)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802dd520;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Component", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.Filter
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)(::WaveHarmonic::Crest::WaterRenderer*, int32_t)>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::Filter)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802e30f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)(::WaveHarmonic::Crest::DepthLod*)>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::_ctor)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x182563c30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthLod*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput.Draw
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::*)(::WaveHarmonic::Crest::Lod*, ::UnityEngine::Rendering::CommandBuffer*, ::UnityEngine::Rendering::RenderTargetIdentifier, int32_t, float_t, int32_t)>(&::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::Draw)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x182563750;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::WaveHarmonic::Crest::DepthLod*& WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_get__DepthLod()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthLod;
}
constexpr ::WaveHarmonic::Crest::DepthLod* const& WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_get__DepthLod() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____DepthLod;
}
constexpr void WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_set__DepthLod(::WaveHarmonic::Crest::DepthLod*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____DepthLod = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_get__Terrains()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Terrains;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_get__Terrains() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____Terrains;
}
constexpr void WaveHarmonic::Crest::DepthLod_TerrainDepthInput::__cordl_internal_set__Terrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____Terrains = value;
}
inline bool WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Enabled()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Enabled", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_IsCompute()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_IsCompute", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Queue()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Queue", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Pass()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Pass", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::UnityEngine::Rect WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Rect()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Rect", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Rect>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::MonoBehaviour> WaveHarmonic::Crest::DepthLod_TerrainDepthInput::get_Component()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"get_Component", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::MonoBehaviour>>(this, ___internal_method);
}
inline float_t WaveHarmonic::Crest::DepthLod_TerrainDepthInput::Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"Filter", {}, {::i2c::type_of<::WaveHarmonic::Crest::WaterRenderer*>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, water, slice);
}
inline void WaveHarmonic::Crest::DepthLod_TerrainDepthInput::_ctor(::WaveHarmonic::Crest::DepthLod*  lod)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {".ctor", {}, {::i2c::type_of<::WaveHarmonic::Crest::DepthLod*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod);
}
inline void WaveHarmonic::Crest::DepthLod_TerrainDepthInput::Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(),
                        {"Draw", {}, {::i2c::type_of<::WaveHarmonic::Crest::Lod*>(), ::i2c::type_of<::UnityEngine::Rendering::CommandBuffer*>(), ::i2c::type_of<::UnityEngine::Rendering::RenderTargetIdentifier>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lod, buffer, target, pass, weight, slices);
}
inline ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput* WaveHarmonic::Crest::DepthLod_TerrainDepthInput::New_ctor(::WaveHarmonic::Crest::DepthLod*  lod)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*>(lod));
}
/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr  WaveHarmonic::Crest::DepthLod_TerrainDepthInput::operator ::WaveHarmonic::Crest::ILodInput*() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* WaveHarmonic::Crest::DepthLod_TerrainDepthInput::i___WaveHarmonic__Crest__ILodInput() noexcept {
return static_cast<::WaveHarmonic::Crest::ILodInput*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput::DepthLod_TerrainDepthInput()   {
}
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_NullColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (*)()>(&::WaveHarmonic::Crest::DepthLod::get_NullColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182554360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_NullColor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_ID
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_ID)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825543c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 8}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_Name
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_Name)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1825543d0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 9}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_GizmoColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_GizmoColor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553ef0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 14}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_ClearColor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Color (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_ClearColor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182554360;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 11}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_NeedToReadWriteTextureData
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_NeedToReadWriteTextureData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1802f6470;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 12}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_RequestedTextureFormat
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Experimental::Rendering::GraphicsFormat (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_RequestedTextureFormat)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x182554550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 10}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_NullTexture
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Texture2DArray> (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_NullTexture)> {
  constexpr static std::size_t size = 0x170;
  constexpr static std::size_t addrs = 0x1825543e0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 16}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182554320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.CreateProvider
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::IDepthProvider* (::WaveHarmonic::Crest::DepthLod::*)(bool)>(&::WaveHarmonic::Crest::DepthLod::CreateProvider)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x182553f70;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 40}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_Inputs
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_Inputs)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x182553f30;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 13}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.OnLoad
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::WaveHarmonic::Crest::DepthLod::OnLoad)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x1825541a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"OnLoad", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.SetEnableSignedDistanceFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)(bool, bool)>(&::WaveHarmonic::Crest::DepthLod::SetEnableSignedDistanceFields)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x1825541f0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"SetEnableSignedDistanceFields", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.Enable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::Enable)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x1825540b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 24}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.Disable
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::Disable)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x182554060;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 25}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.Destroy
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::Destroy)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x182554030;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(
                    ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                    {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 26}
                ));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_EnableSignedDistanceFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_EnableSignedDistanceFields)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x1817f13b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_EnableSignedDistanceFields", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.set_EnableSignedDistanceFields
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)(bool)>(&::WaveHarmonic::Crest::DepthLod::set_EnableSignedDistanceFields)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x1825545b0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"set_EnableSignedDistanceFields", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.get_IncludeTerrainHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::WaveHarmonic::Crest::DepthLod::*)()>(&::WaveHarmonic::Crest::DepthLod::get_IncludeTerrainHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18030d8a0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_IncludeTerrainHeight", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::WaveHarmonic::Crest::DepthLod.set_IncludeTerrainHeight
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::WaveHarmonic::Crest::DepthLod::*)(bool)>(&::WaveHarmonic::Crest::DepthLod::set_IncludeTerrainHeight)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x18140a480;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"set_IncludeTerrainHeight", {}, {::i2c::type_of<bool>()}}
                    )));
    return ___internal_method;
  }
};
constexpr bool& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__IncludeTerrainHeight()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeTerrainHeight;
}
constexpr bool const& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__IncludeTerrainHeight() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____IncludeTerrainHeight;
}
constexpr void WaveHarmonic::Crest::DepthLod::__cordl_internal_set__IncludeTerrainHeight(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____IncludeTerrainHeight = value;
}
constexpr bool& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__EnableSignedDistanceFields()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableSignedDistanceFields;
}
constexpr bool const& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__EnableSignedDistanceFields() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____EnableSignedDistanceFields;
}
constexpr void WaveHarmonic::Crest::DepthLod::__cordl_internal_set__EnableSignedDistanceFields(bool  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____EnableSignedDistanceFields = value;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray>& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__NullTexture()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NullTexture;
}
constexpr ::UnityW<::UnityEngine::Texture2DArray> const& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__NullTexture() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____NullTexture;
}
constexpr void WaveHarmonic::Crest::DepthLod::__cordl_internal_set__NullTexture(::UnityW<::UnityEngine::Texture2DArray>  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____NullTexture = value;
}
constexpr ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__TerrainDepthInput()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainDepthInput;
}
constexpr ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput* const& WaveHarmonic::Crest::DepthLod::__cordl_internal_get__TerrainDepthInput() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____TerrainDepthInput;
}
constexpr void WaveHarmonic::Crest::DepthLod::__cordl_internal_set__TerrainDepthInput(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____TerrainDepthInput = value;
}
inline void WaveHarmonic::Crest::DepthLod::setStaticF_s_GizmoColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::DepthLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLod::getStaticF_s_GizmoColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_GizmoColor", ::WaveHarmonic::Crest::DepthLod*>();
}
inline void WaveHarmonic::Crest::DepthLod::setStaticF_s_NullColor(::UnityEngine::Color  value)  {
::cordl_internals::setStaticField<::UnityEngine::Color, "s_NullColor", ::WaveHarmonic::Crest::DepthLod*>(std::forward<::UnityEngine::Color>(value));
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLod::getStaticF_s_NullColor()  {
return ::cordl_internals::getStaticField<::UnityEngine::Color, "s_NullColor", ::WaveHarmonic::Crest::DepthLod*>();
}
inline void WaveHarmonic::Crest::DepthLod::setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value)  {
::cordl_internals::setStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::DepthLod*>(std::forward<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(value));
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::DepthLod::getStaticF_s_Inputs()  {
return ::cordl_internals::getStaticField<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*, "s_Inputs", ::WaveHarmonic::Crest::DepthLod*>();
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLod::get_NullColor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_NullColor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(nullptr, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::DepthLod::get_ID()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 8}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW WaveHarmonic::Crest::DepthLod::get_Name()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 9}
                        )));
return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLod::get_GizmoColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 14}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline ::UnityEngine::Color WaveHarmonic::Crest::DepthLod::get_ClearColor()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 11}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Color>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthLod::get_NeedToReadWriteTextureData()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 12}
                        )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat WaveHarmonic::Crest::DepthLod::get_RequestedTextureFormat()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 10}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::Experimental::Rendering::GraphicsFormat>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Texture2DArray> WaveHarmonic::Crest::DepthLod::get_NullTexture()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 16}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Texture2DArray>>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::WaveHarmonic::Crest::IDepthProvider* WaveHarmonic::Crest::DepthLod::CreateProvider(bool  onEnable)  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 40}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::IDepthProvider*>(this, ___internal_method, onEnable);
}
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* WaveHarmonic::Crest::DepthLod::get_Inputs()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 13}
                        )));
return ::cordl_internals::RunMethodRethrow<::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::OnLoad()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"OnLoad", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::SetEnableSignedDistanceFields(bool  previous, bool  current)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"SetEnableSignedDistanceFields", {}, {::i2c::type_of<bool>(), ::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, previous, current);
}
inline void WaveHarmonic::Crest::DepthLod::Enable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 24}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::Disable()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 25}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::Destroy()  {
auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                            reinterpret_cast<Il2CppObject*>(this)->klass,
                            {::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(), 26}
                        )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool WaveHarmonic::Crest::DepthLod::get_EnableSignedDistanceFields()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_EnableSignedDistanceFields", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::set_EnableSignedDistanceFields(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"set_EnableSignedDistanceFields", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool WaveHarmonic::Crest::DepthLod::get_IncludeTerrainHeight()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"get_IncludeTerrainHeight", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void WaveHarmonic::Crest::DepthLod::set_IncludeTerrainHeight(bool  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::WaveHarmonic::Crest::DepthLod*>(),
                        {"set_IncludeTerrainHeight", {}, {::i2c::type_of<bool>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::WaveHarmonic::Crest::DepthLod* WaveHarmonic::Crest::DepthLod::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::WaveHarmonic::Crest::DepthLod*>());
}
// Ctor Parameters []
constexpr ::WaveHarmonic::Crest::DepthLod::DepthLod()   {
}
