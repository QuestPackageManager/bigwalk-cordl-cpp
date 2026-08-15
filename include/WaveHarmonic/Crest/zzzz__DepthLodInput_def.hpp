#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/DepthLodInput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "WaveHarmonic/Crest/zzzz__LodInput_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DepthLodInput)
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
struct RenderTargetIdentifier;
}
namespace UnityEngine {
struct Color;
}
namespace WaveHarmonic::Crest::Utility {
template<typename TKey,typename TValue>
class SortedList_2;
}
namespace WaveHarmonic::Crest {
class DepthLodInput_ShaderIDs;
}
namespace WaveHarmonic::Crest {
class ILodInput;
}
namespace WaveHarmonic::Crest {
struct LodInputMode;
}
namespace WaveHarmonic::Crest {
class Lod;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class DepthLodInput;
}
namespace WaveHarmonic::Crest {
class DepthLodInput_ShaderIDs;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::DepthLodInput*);
MARK_REF_T(::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthLodInput*, "WaveHarmonic.Crest", "DepthLodInput");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::DepthLodInput_ShaderIDs*, "WaveHarmonic.Crest", "DepthLodInput/ShaderIDs");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthLodInput/ShaderIDs
class CORDL_TYPE DepthLodInput_ShaderIDs : public ::System::Object {
public:
// Declarations
/// @brief Field s_HeightOffset, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_HeightOffset, put=setStaticF_s_HeightOffset)) int32_t  s_HeightOffset;

/// @brief Field s_SDF, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SDF, put=setStaticF_s_SDF)) int32_t  s_SDF;

static inline int32_t getStaticF_s_HeightOffset() ;

static inline int32_t getStaticF_s_SDF() ;

static inline void setStaticF_s_HeightOffset(int32_t  value) ;

static inline void setStaticF_s_SDF(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthLodInput_ShaderIDs() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthLodInput_ShaderIDs", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthLodInput_ShaderIDs(DepthLodInput_ShaderIDs && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthLodInput_ShaderIDs", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthLodInput_ShaderIDs(DepthLodInput_ShaderIDs const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16509};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::DepthLodInput_ShaderIDs) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.LodInput
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.DepthLodInput
class CORDL_TYPE DepthLodInput : public ::WaveHarmonic::Crest::LodInput {
public:
// Declarations
using ShaderIDs = ::WaveHarmonic::Crest::DepthLodInput_ShaderIDs;

 __declspec(property(get=get_CopySignedDistanceField, put=set_CopySignedDistanceField)) bool  CopySignedDistanceField;

 __declspec(property(get=get_DefaultMode)) ::WaveHarmonic::Crest::LodInputMode  DefaultMode;

 __declspec(property(get=get_GizmoColor)) ::UnityEngine::Color  GizmoColor;

 __declspec(property(get=get_Inputs)) ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>*  Inputs;

 __declspec(property(get=get_Relative, put=set_Relative)) bool  Relative;

/// @brief Field _CopySignedDistanceField, offset 0xb1, size 0x1 
 __declspec(property(get=__cordl_internal_get__CopySignedDistanceField, put=__cordl_internal_set__CopySignedDistanceField)) bool  _CopySignedDistanceField;

/// @brief Field _Relative, offset 0xb0, size 0x1 
 __declspec(property(get=__cordl_internal_get__Relative, put=__cordl_internal_set__Relative)) bool  _Relative;

/// @brief Method Draw, addr 0x182553be0, size 0x290, virtual true, abstract: false, final false
inline void Draw(::WaveHarmonic::Crest::Lod*  simulation, ::UnityEngine::Rendering::CommandBuffer*  buffer, ::UnityEngine::Rendering::RenderTargetIdentifier  target, int32_t  pass, float_t  weight, int32_t  slice) ;

/// @brief Method InferBlend, addr 0x181c9c1e0, size 0x10, virtual true, abstract: false, final false
inline void InferBlend() ;

static inline ::WaveHarmonic::Crest::DepthLodInput* New_ctor() ;

constexpr bool const& __cordl_internal_get__CopySignedDistanceField() const;

constexpr bool& __cordl_internal_get__CopySignedDistanceField() ;

constexpr bool const& __cordl_internal_get__Relative() const;

constexpr bool& __cordl_internal_get__Relative() ;

constexpr void __cordl_internal_set__CopySignedDistanceField(bool  value) ;

constexpr void __cordl_internal_set__Relative(bool  value) ;

/// @brief Method .ctor, addr 0x182553e70, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_CopySignedDistanceField, addr 0x1817f13b0, size 0x10, virtual false, abstract: false, final false
inline bool get_CopySignedDistanceField() ;

/// @brief Method get_DefaultMode, addr 0x180feb5f0, size 0x28d50, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::LodInputMode get_DefaultMode() ;

/// @brief Method get_GizmoColor, addr 0x182553ef0, size 0x40, virtual true, abstract: false, final false
inline ::UnityEngine::Color get_GizmoColor() ;

/// @brief Method get_Inputs, addr 0x182553f30, size 0x40, virtual true, abstract: false, final false
inline ::WaveHarmonic::Crest::Utility::SortedList_2<int32_t,::WaveHarmonic::Crest::ILodInput*>* get_Inputs() ;

/// @brief Method get_Relative, addr 0x18030d8a0, size 0x10, virtual false, abstract: false, final false
inline bool get_Relative() ;

/// @brief Method set_CopySignedDistanceField, addr 0x1817f1450, size 0x10, virtual false, abstract: false, final false
inline void set_CopySignedDistanceField(bool  value) ;

/// @brief Method set_Relative, addr 0x18140a480, size 0x10, virtual false, abstract: false, final false
inline void set_Relative(bool  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DepthLodInput() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DepthLodInput", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DepthLodInput(DepthLodInput && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DepthLodInput", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DepthLodInput(DepthLodInput const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16510};

/// @brief Field _Relative, offset: 0xb0, size: 0x1, def value: None
 bool  ____Relative;

/// @brief Field _CopySignedDistanceField, offset: 0xb1, size: 0x1, def value: None
 bool  ____CopySignedDistanceField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::DepthLodInput, ____Relative) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::DepthLodInput, ____CopySignedDistanceField) == 0xb1, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::DepthLodInput) == 0xb8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
