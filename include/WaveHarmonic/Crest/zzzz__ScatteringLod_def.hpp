#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/ScatteringLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ScatteringLod)
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
class ScatteringLod_ShaderIDs;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class ScatteringLod;
}
namespace WaveHarmonic::Crest {
class ScatteringLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::ScatteringLod*);
MARK_REF_T(::WaveHarmonic::Crest::ScatteringLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ScatteringLod*, "WaveHarmonic.Crest", "ScatteringLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::ScatteringLod_ShaderIDs*, "WaveHarmonic.Crest", "ScatteringLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ScatteringLod/ShaderIDs
class CORDL_TYPE ScatteringLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_SampleScatteringSimulation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SampleScatteringSimulation, put=setStaticF_s_SampleScatteringSimulation)) int32_t  s_SampleScatteringSimulation;

static inline int32_t getStaticF_s_SampleScatteringSimulation() ;

static inline void setStaticF_s_SampleScatteringSimulation(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatteringLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatteringLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatteringLod_ShaderIDs(ScatteringLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatteringLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatteringLod_ShaderIDs(ScatteringLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16499};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ScatteringLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.ColorLod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.ScatteringLod
class CORDL_TYPE ScatteringLod : public ::WaveHarmonic::Crest::ColorLod {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::ScatteringLod_ShaderIDs;

 __declspec(property(get=get_AlwaysClear)) bool  AlwaysClear;

 __declspec(property(get=get_ClearColor)) ::UnityEngine::Color  ClearColor;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_GlobalShaderID)) int32_t  GlobalShaderID;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Name)) ::StringW  Name;

 __declspec(property(get=get_NeedToReadWriteTextureData)) bool  NeedToReadWriteTextureData;

 __declspec(property(get=get_RequiresClearBorder)) bool  RequiresClearBorder;

 __declspec(property(get=get_ID)) ::StringW  _cordl_ID;

/// @brief Field s_DefaultColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_DefaultColor, put=setStaticF_s_DefaultColor)) ::UnityEngine::Color  s_DefaultColor;

/// @brief Field s_GizmoColor, offset 0xffffffff, size 0x10 
 __declspec(property(get=getStaticF_s_GizmoColor, put=setStaticF_s_GizmoColor)) ::UnityEngine::Color  s_GizmoColor;

/// @brief Field s_Inputs, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_Inputs, put=setStaticF_s_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  s_Inputs;

static inline ::WaveHarmonic::Crest::ScatteringLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x18255c000, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetShorelineColor, addr 0x18255c050, size 0xd0, virtual true, abstract: false, final false
inline void SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current) ;

/// @brief Method .ctor, addr 0x18255c1e0, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_DefaultColor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_AlwaysClear, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_AlwaysClear() ;

/// @brief Method get_ClearColor, addr 0x18255c270, size 0xe0, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x18255bf80, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_GlobalShaderID, addr 0x18255c350, size 0x20, virtual true, abstract: false, final false
inline int32_t get_GlobalShaderID() ;

/// @brief Method get_ID, addr 0x18255c370, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x18255bfc0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x18255c370, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_Name() ;

/// @brief Method get_NeedToReadWriteTextureData, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_NeedToReadWriteTextureData() ;

/// @brief Method get_RequiresClearBorder, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_RequiresClearBorder() ;

static inline void setStaticF_s_DefaultColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_GizmoColor(::UnityEngine::Color  value) ;

static inline void setStaticF_s_Inputs(::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ScatteringLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ScatteringLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ScatteringLod(ScatteringLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ScatteringLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ScatteringLod(ScatteringLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16500};

/// @brief Size padding 0xd8 - 0xc8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::ScatteringLod) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
