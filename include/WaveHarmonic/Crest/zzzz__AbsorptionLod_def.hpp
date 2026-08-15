#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/AbsorptionLod.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "WaveHarmonic/Crest/zzzz__ColorLod_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(AbsorptionLod)
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class AbsorptionLod_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class AbsorptionLod;
}
namespace WaveHarmonic::Crest {
class AbsorptionLod_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::AbsorptionLod*);
MARK_REF_T(::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AbsorptionLod*, "WaveHarmonic.Crest", "AbsorptionLod");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs*, "WaveHarmonic.Crest", "AbsorptionLod/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AbsorptionLod/ShaderIDs
class CORDL_TYPE AbsorptionLod_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_SampleAbsorptionSimulation, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SampleAbsorptionSimulation, put=setStaticF_s_SampleAbsorptionSimulation)) int32_t  s_SampleAbsorptionSimulation;

static inline int32_t getStaticF_s_SampleAbsorptionSimulation() ;

static inline void setStaticF_s_SampleAbsorptionSimulation(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr AbsorptionLod_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionLod_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbsorptionLod_ShaderIDs(AbsorptionLod_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionLod_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbsorptionLod_ShaderIDs(AbsorptionLod_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16472};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies UnityEngine.Color, WaveHarmonic.Crest.ColorLod
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.AbsorptionLod
class CORDL_TYPE AbsorptionLod : public ::WaveHarmonic::Crest::ColorLod {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::AbsorptionLod_ShaderIDs;

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

static inline ::WaveHarmonic::Crest::AbsorptionLod* New_ctor() ;

/// @brief Method OnLoad, addr 0x18254fde0, size 0x50, virtual false, abstract: false, final false
static inline void OnLoad() ;

/// @brief Method SetShorelineColor, addr 0x18254fe30, size 0xa0, virtual true, abstract: false, final false
inline void SetShorelineColor(::UnityEngine::Color  previous, ::UnityEngine::Color  current) ;

/// @brief Method .ctor, addr 0x18254ff90, size 0x90, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::UnityEngine::Color getStaticF_s_DefaultColor() ;

static inline ::UnityEngine::Color getStaticF_s_GizmoColor() ;

static inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* getStaticF_s_Inputs() ;

/// @brief Method get_AlwaysClear, addr 0x1802f6470, size 0x10, virtual true, abstract: false, final false
inline bool get_AlwaysClear() ;

/// @brief Method get_ClearColor, addr 0x182550020, size 0x100, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_ClearColor() ;

/// @brief Method get_GizmoColor, addr 0x18254fd60, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_GlobalShaderID, addr 0x182550120, size 0x20, virtual true, abstract: false, final false
inline int32_t get_GlobalShaderID() ;

/// @brief Method get_ID, addr 0x182550140, size 0x10, virtual true, abstract: false, final false
inline ::StringW get_ID() ;

/// @brief Method get_Inputs, addr 0x18254fda0, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Name, addr 0x182550140, size 0x10, virtual true, abstract: false, final false
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
constexpr AbsorptionLod() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionLod", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
AbsorptionLod(AbsorptionLod && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "AbsorptionLod", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
AbsorptionLod(AbsorptionLod const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16473};

/// @brief Size padding 0xd8 - 0xc8 = 0x10, packed as 0x10
 uint8_t  _cordl_size_padding[0x10];

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::AbsorptionLod) == 0xd8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
