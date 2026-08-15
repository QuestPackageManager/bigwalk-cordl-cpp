#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/FlowLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__Lod_1_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FlowLod)
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class FlowLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class IFlowProvider;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class WaterRenderer;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class FlowLod;
}
namespace WaveHarmonic::Crest {
class FlowLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::FlowLod*);
MARK_REF_T(::WaveHarmonic::Crest::FlowLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FlowLod*, "WaveHarmonic.Crest", "FlowLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::FlowLod_ShaderIDs*, "WaveHarmonic.Crest", "FlowLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FlowLod/ShaderIDs
class CORDL_TYPE FlowLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_Flow, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_Flow, put=setStaticF_s_Flow)) int32_t  s_Flow;

static inline int32_t getStaticF_s_Flow() ;

static inline void setStaticF_s_Flow(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowLod_ShaderIDs(FlowLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowLod_ShaderIDs(FlowLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16494};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FlowLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.Lod`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.FlowLod
class CORDL_TYPE FlowLod : public ::WaveHarmonic::Crest::Lod_1<::WaveHarmonic::Crest::IFlowProvider*> {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::FlowLod_ShaderIDs;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_RequestedTextureFormat)) ::UnityEngine::Experimental::Rendering::GraphicsFormat  RequestedTextureFormat;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

/// @brief Method BuildCommandBuffer, addr 0x182558540, size 0x110, virtual true, abstract: false, final false
inline void BuildCommandBuffer(::WaveHarmonic::Crest::WaterRenderer*  water, ::UnityEngine::Rendering::CommandBuffer*  buffer) ;

/// @brief Method CreateProvider, addr 0x182558650, size 0xc0, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::IFlowProvider* CreateProvider(bool  onEnable) ;

/// @brief Method Disable, addr 0x182558710, size 0x20, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method Enable, addr 0x182558730, size 0x10, virtual true, abstract: false, final false
inline void Enable() ;

static inline ::WaveHarmonic::Crest::FlowLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x182558740, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetGlobals, addr 0x182558790, size 0x40, virtual true, abstract: false, final false
inline void SetGlobals(bool  onEnable) ;

/// @brief Method .ctor, addr 0x182558880, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_ClearColor, addr 0x182263110, size 0x20, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x1825584c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_ID, addr 0x1825588b0, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x182558500, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_RequestedTextureFormat, addr 0x1825588c0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Experimental::Rendering::GraphicsFormat get_RequestedTextureFormat() ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr FlowLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "FlowLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
FlowLod(FlowLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "FlowLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
FlowLod(FlowLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16495};

/// @brief Field k_FlowKeyword offset 0xffffffff size 0x8
static constexpr ::ConstString  k_FlowKeyword{u"CREST_FLOW_ON_INTERNAL"};

/// @brief Size padding 0xb0 - 0xa8 = 0x8, packed as 0x8
 uint8_t  _cordl_size_padding[0x8];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::FlowLod) == 0xb0, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
