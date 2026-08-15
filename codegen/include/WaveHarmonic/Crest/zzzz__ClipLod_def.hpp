#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ClipLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__DefaultClippingState_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClipLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
struct DefaultClippingState;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ClipLod;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ClipLod*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ClipLod*, "WaveHarmonic.Crest", "ClipLod");
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.DefaultClippingState, WaveHarmonic.Crest.Lod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ClipLod
class CORDL_TYPE ClipLod : public ::WaveHarmonic::Crest::Lod {
public:
// Declarations
 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_DefaultClippingState, put=set_DefaultClippingState)) ::WaveHarmonic::Crest::DefaultClippingState  DefaultClippingState;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_RequiresClearBorder)) bool  RequiresClearBorder;

 __declspec(property(get=get_SkipEndOfFrame)) bool  SkipEndOfFrame;

/// @brief Field _DefaultClippingState, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get__DefaultClippingState, put=__cordl_internal_set__DefaultClippingState)) ::WaveHarmonic::Crest::DefaultClippingState  _DefaultClippingState;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

static inline ::WaveHarmonic::Crest::ClipLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x182553570, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetDefaultClippingState, addr 0x1825535c0, size 0x60, virtual false, abstract: false, final false
inline void SetDefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  previous, ::WaveHarmonic::Crest::DefaultClippingState  current) ;

constexpr ::WaveHarmonic::Crest::DefaultClippingState const& __cordl_internal_get__DefaultClippingState() const;

constexpr ::WaveHarmonic::Crest::DefaultClippingState& __cordl_internal_get__DefaultClippingState() ;

constexpr void __cordl_internal_set__DefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  value) ;

/// @brief Method .ctor, addr 0x1825536d0, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_ClearColor, addr 0x1825536f0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_DefaultClippingState, addr 0x180408b50, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::DefaultClippingState get_DefaultClippingState() ;

/// @brief Method get_GizmoColor, addr 0x1825530c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x182553730, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x182553100, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x182553740, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_RequestedTextureFormat, addr 0x182553750, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

/// @brief Method get_RequiresClearBorder, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_RequiresClearBorder() ;

/// @brief Method get_SkipEndOfFrame, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_SkipEndOfFrame() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

/// @brief Method set_DefaultClippingState, addr 0x182553790, size 0x60, virtual false, abstract: false, final false
inline void set_DefaultClippingState(::WaveHarmonic::Crest::DefaultClippingState  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ClipLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ClipLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ClipLod(ClipLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ClipLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ClipLod(ClipLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16485};

/// @brief Field _DefaultClippingState, offset: 0x94, size: 0x4, def value: None
 ::WaveHarmonic::Crest::DefaultClippingState  ____DefaultClippingState;

/// @brief Size padding 0xa8 - 0x98 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::ClipLod, ____DefaultClippingState) == 0x94, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::ClipLod) == 0xa8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
