#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthLod)
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class MonoBehaviour;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
class Terrain;
}
namespace UnityEngine {
class Texture2DArray;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class DepthLod_TerrainDepthInput;
}
namespace WaveHarmonic::Crest {
class IDepthProvider;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class Lod;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DepthLod;
}
namespace WaveHarmonic::Crest {
class DepthLod_TerrainDepthInput;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DepthLod*);
MARK_REF_T(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthLod*, "WaveHarmonic.Crest", "DepthLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*, "WaveHarmonic.Crest", "DepthLod/TerrainDepthInput");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthLod/TerrainDepthInput
class CORDL_TYPE DepthLod_TerrainDepthInput : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Component)) ::UnityW<::UnityEngine::MonoBehaviour>  Component;

 __declspec(property(get=get_Enabled)) bool  Enabled;

 __declspec(property(get=get_IsCompute)) bool  IsCompute;

 __declspec(property(get=get_Pass)) int32_t  Pass;

 __declspec(property(get=get_Queue)) int32_t  Queue;

 __declspec(property(get=get_Rect)) ::UnityEngine::Rect  Rect;

/// @brief Field _DepthLod, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthLod, put=__cordl_internal_set__DepthLod)) ::WaveHarmonic::Crest::DepthLod*  _DepthLod;

/// @brief Field _Terrains, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__Terrains, put=__cordl_internal_set__Terrains)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  _Terrains;

/// @brief Convert operator to "::WaveHarmonic::Crest::ILodInput"
constexpr operator  ::WaveHarmonic::Crest::ILodInput*() noexcept;

/// @brief Method Draw, addr 0x182563750, size 0x4e0, virtual true, abstract: false, final true
inline void Draw(::WaveHarmonic::Crest::Lod*  lod, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slices) ;

/// @brief Method Filter, addr 0x1802e30f0, size 0x10, virtual true, abstract: false, final true
inline float_t Filter(::WaveHarmonic::Crest::WaterRenderer*  water, int32_t  slice) ;

static inline ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput* New_ctor(::WaveHarmonic::Crest::DepthLod*  lod) ;

constexpr ::WaveHarmonic::Crest::DepthLod* const& __cordl_internal_get__DepthLod() const;

constexpr ::WaveHarmonic::Crest::DepthLod*& __cordl_internal_get__DepthLod() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>* const& __cordl_internal_get__Terrains() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*& __cordl_internal_get__Terrains() ;

constexpr void __cordl_internal_set__DepthLod(::WaveHarmonic::Crest::DepthLod*  value) ;

constexpr void __cordl_internal_set__Terrains(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  value) ;

/// @brief Method .ctor, addr 0x182563c30, size 0x70, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::DepthLod*  lod) ;

/// @brief Method get_Component, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final true
inline ::UnityW<::UnityEngine::MonoBehaviour> get_Component() ;

/// @brief Method get_Enabled, addr 0x182563ca0, size 0x20, virtual true, abstract: false, final true
inline bool get_Enabled() ;

/// @brief Method get_IsCompute, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final true
inline bool get_IsCompute() ;

/// @brief Method get_Pass, addr 0x180393450, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Pass() ;

/// @brief Method get_Queue, addr 0x182537df0, size 0x10, virtual true, abstract: false, final true
inline int32_t get_Queue() ;

/// @brief Method get_Rect, addr 0x1821aa7b0, size 0x40, virtual true, abstract: false, final true
inline ::UnityEngine::Rect get_Rect() ;

/// @brief Convert to "::WaveHarmonic::Crest::ILodInput"
constexpr ::WaveHarmonic::Crest::ILodInput* i___WaveHarmonic__Crest__ILodInput() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthLod_TerrainDepthInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthLod_TerrainDepthInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthLod_TerrainDepthInput(DepthLod_TerrainDepthInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthLod_TerrainDepthInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthLod_TerrainDepthInput(DepthLod_TerrainDepthInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16490};

/// @brief Field _DepthLod, offset: 0x10, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DepthLod*  ____DepthLod;

/// @brief Field _Terrains, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Terrain>>*  ____Terrains;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput, ____DepthLod) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput, ____Terrains) == 0x18, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput) == 0x20, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Lod`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthLod
class CORDL_TYPE DepthLod : public ::WaveHarmonic::Crest::Lod_1<::WaveHarmonic::Crest::IDepthProvider*> {
public:
// Declarations
using TerrainDepthInput = ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_EnableSignedDistanceFields, put=set_EnableSignedDistanceFields)) bool  EnableSignedDistanceFields;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_IncludeTerrainHeight, put=set_IncludeTerrainHeight)) bool  IncludeTerrainHeight;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_NullTexture)) ::UnityW<::UnityEngine::Texture2DArray>  NullTexture;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

/// @brief Field _EnableSignedDistanceFields, offset 0xa9, size 0x1 
 __declspec(property(get=__cordl_internal_get__EnableSignedDistanceFields, put=__cordl_internal_set__EnableSignedDistanceFields)) bool  _EnableSignedDistanceFields;

/// @brief Field _IncludeTerrainHeight, offset 0xa8, size 0x1 
 __declspec(property(get=__cordl_internal_get__IncludeTerrainHeight, put=__cordl_internal_set__IncludeTerrainHeight)) bool  _IncludeTerrainHeight;

/// @brief Field _NullTexture, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__NullTexture, put=__cordl_internal_set__NullTexture)) ::UnityW<::UnityEngine::Texture2DArray>  _NullTexture;

/// @brief Field _TerrainDepthInput, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__TerrainDepthInput, put=__cordl_internal_set__TerrainDepthInput)) ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*  _TerrainDepthInput;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Field s_NullColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_NullColor, put=setStaticF_s_NullColor)) ::UnityEngine::Color  s_NullColor;

/// @brief Method CreateProvider, addr 0x182553f70, size 0xc0, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::IDepthProvider* CreateProvider(bool  onEnable) ;

/// @brief Method Destroy, addr 0x182554030, size 0x30, virtual true, abstract: false, final false
inline void Destroy() ;

/// @brief Method Disable, addr 0x182554060, size 0x50, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x1825540b0, size 0xf0, virtual true, abstract: false, final false
inline void Enable() ;

static inline ::WaveHarmonic::Crest::DepthLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x1825541a0, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetEnableSignedDistanceFields, addr 0x1825541f0, size 0x70, virtual false, abstract: false, final false
inline void SetEnableSignedDistanceFields(bool  previous, bool  current) ;

constexpr bool const& __cordl_internal_get__EnableSignedDistanceFields() const;

constexpr bool& __cordl_internal_get__EnableSignedDistanceFields() ;

constexpr bool const& __cordl_internal_get__IncludeTerrainHeight() const;

constexpr bool& __cordl_internal_get__IncludeTerrainHeight() ;

constexpr ::UnityW<::UnityEngine::Texture2DArray> const& __cordl_internal_get__NullTexture() const;

constexpr ::UnityW<::UnityEngine::Texture2DArray>& __cordl_internal_get__NullTexture() ;

constexpr ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput* const& __cordl_internal_get__TerrainDepthInput() const;

constexpr ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*& __cordl_internal_get__TerrainDepthInput() ;

constexpr void __cordl_internal_set__EnableSignedDistanceFields(bool  value) ;

constexpr void __cordl_internal_set__IncludeTerrainHeight(bool  value) ;

constexpr void __cordl_internal_set__NullTexture(::UnityW<::UnityEngine::Texture2DArray>  value) ;

constexpr void __cordl_internal_set__TerrainDepthInput(::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*  value) ;

/// @brief Method .ctor, addr 0x182554320, size 0x40, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

static inline ::UnityEngine::Color getStaticF_s_NullColor() ;

/// @brief Method get_ClearColor, addr 0x182554360, size 0x60, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_EnableSignedDistanceFields, addr 0x1817f13b0, size 0x10, virtual false, abstract: false, final false
inline bool get_EnableSignedDistanceFields() ;

/// @brief Method get_GizmoColor, addr 0x182553ef0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x1825543c0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_IncludeTerrainHeight, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_IncludeTerrainHeight() ;

/// @brief Method get_Inputs, addr 0x182553f30, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x1825543d0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_NullColor, addr 0x182554360, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Color get_NullColor() ;

/// @brief Method get_NullTexture, addr 0x1825543e0, size 0x170, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::Texture2DArray> get_NullTexture() ;

/// @brief Method get_RequestedTextureFormat, addr 0x182554550, size 0x60, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

static inline void setStaticF_s_NullColor(::UnityEngine::Color  value) ;

/// @brief Method set_EnableSignedDistanceFields, addr 0x1825545b0, size 0x80, virtual false, abstract: false, final false
inline void set_EnableSignedDistanceFields(bool  value) ;

/// @brief Method set_IncludeTerrainHeight, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_IncludeTerrainHeight(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthLod(DepthLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthLod(DepthLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16491};

/// @brief Field k_DepthBaseline offset 0xffffffff size 0x4
static constexpr float_t  k_DepthBaseline{INFINITY};

/// @brief Field _IncludeTerrainHeight, offset: 0xa8, size: 0x1, def value: None
 bool  ____IncludeTerrainHeight;

/// @brief Field _EnableSignedDistanceFields, offset: 0xa9, size: 0x1, def value: None
 bool  ____EnableSignedDistanceFields;

/// @brief Field _NullTexture, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2DArray>  ____NullTexture;

/// @brief Field _TerrainDepthInput, offset: 0xb8, size: 0x8, def value: None
 ::WaveHarmonic::Crest::DepthLod_TerrainDepthInput*  ____TerrainDepthInput;

/// @brief Size padding 0xc8 - 0xc0 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthLod, ____IncludeTerrainHeight) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthLod, ____EnableSignedDistanceFields) == 0xa9, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthLod, ____NullTexture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthLod, ____TerrainDepthInput) == 0xb8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthLod) == 0xc8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
