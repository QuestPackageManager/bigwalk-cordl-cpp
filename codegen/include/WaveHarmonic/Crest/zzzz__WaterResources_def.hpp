#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/WaterResources.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/zzzz__LocalKeyword_def.hpp"
#include "WaveHarmonic/Crest/Utility/zzzz__ScriptableSingleton_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(WaterResources)
namespace System {
class Action;
}
namespace UnityEngine::Experimental::Rendering {
struct GraphicsFormat;
}
namespace UnityEngine::Rendering {
struct LocalKeyword;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class Shader;
}
namespace WaveHarmonic::Crest {
class WaterResources_BlitCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_BlurCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_ClearCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_ComputeLibrary;
}
namespace WaveHarmonic::Crest {
class WaterResources_ComputeResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_GerstnerCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_KeywordResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_ShaderResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_ShapeCombineCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_UtilityCompute;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class WaterResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_BlitCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_BlurCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_ClearCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_ComputeLibrary;
}
namespace WaveHarmonic::Crest {
class WaterResources_ComputeResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_GerstnerCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_KeywordResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_ShaderResources;
}
namespace WaveHarmonic::Crest {
class WaterResources_ShapeCombineCompute;
}
namespace WaveHarmonic::Crest {
class WaterResources_UtilityCompute;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::WaterResources*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_BlitCompute*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_BlurCompute*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_ClearCompute*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_ComputeLibrary*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_ComputeResources*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_KeywordResources*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_ShaderResources*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*);
MARK_REF_T(::WaveHarmonic::Crest::WaterResources_UtilityCompute*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources*, "WaveHarmonic.Crest", "WaterResources");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_BlitCompute*, "WaveHarmonic.Crest", "WaterResources/BlitCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_BlurCompute*, "WaveHarmonic.Crest", "WaterResources/BlurCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_ClearCompute*, "WaveHarmonic.Crest", "WaterResources/ClearCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_ComputeLibrary*, "WaveHarmonic.Crest", "WaterResources/ComputeLibrary");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_ComputeResources*, "WaveHarmonic.Crest", "WaterResources/ComputeResources");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*, "WaveHarmonic.Crest", "WaterResources/GerstnerCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_KeywordResources*, "WaveHarmonic.Crest", "WaterResources/KeywordResources");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_ShaderResources*, "WaveHarmonic.Crest", "WaterResources/ShaderResources");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*, "WaveHarmonic.Crest", "WaterResources/ShapeCombineCompute");
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::WaterResources_UtilityCompute*, "WaveHarmonic.Crest", "WaterResources/UtilityCompute");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/ComputeLibrary
class CORDL_TYPE WaterResources_ComputeLibrary : public ::System::Object {
public:
// Declarations
/// @brief Field _BlitCompute, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__BlitCompute, put=__cordl_internal_set__BlitCompute)) ::WaveHarmonic::Crest::WaterResources_BlitCompute*  _BlitCompute;

/// @brief Field _BlurCompute, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__BlurCompute, put=__cordl_internal_set__BlurCompute)) ::WaveHarmonic::Crest::WaterResources_BlurCompute*  _BlurCompute;

/// @brief Field _ClearCompute, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClearCompute, put=__cordl_internal_set__ClearCompute)) ::WaveHarmonic::Crest::WaterResources_ClearCompute*  _ClearCompute;

/// @brief Field _GerstnerCompute, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__GerstnerCompute, put=__cordl_internal_set__GerstnerCompute)) ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  _GerstnerCompute;

/// @brief Field _ShapeCombineCompute, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShapeCombineCompute, put=__cordl_internal_set__ShapeCombineCompute)) ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  _ShapeCombineCompute;

static inline ::WaveHarmonic::Crest::WaterResources_ComputeLibrary* New_ctor(::WaveHarmonic::Crest::WaterResources*  resources) ;

constexpr ::WaveHarmonic::Crest::WaterResources_BlitCompute* const& __cordl_internal_get__BlitCompute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_BlitCompute*& __cordl_internal_get__BlitCompute() ;

constexpr ::WaveHarmonic::Crest::WaterResources_BlurCompute* const& __cordl_internal_get__BlurCompute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_BlurCompute*& __cordl_internal_get__BlurCompute() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ClearCompute* const& __cordl_internal_get__ClearCompute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ClearCompute*& __cordl_internal_get__ClearCompute() ;

constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* const& __cordl_internal_get__GerstnerCompute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*& __cordl_internal_get__GerstnerCompute() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* const& __cordl_internal_get__ShapeCombineCompute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*& __cordl_internal_get__ShapeCombineCompute() ;

constexpr void __cordl_internal_set__BlitCompute(::WaveHarmonic::Crest::WaterResources_BlitCompute*  value) ;

constexpr void __cordl_internal_set__BlurCompute(::WaveHarmonic::Crest::WaterResources_BlurCompute*  value) ;

constexpr void __cordl_internal_set__ClearCompute(::WaveHarmonic::Crest::WaterResources_ClearCompute*  value) ;

constexpr void __cordl_internal_set__GerstnerCompute(::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  value) ;

constexpr void __cordl_internal_set__ShapeCombineCompute(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  value) ;

/// @brief Method .ctor, addr 0x18259df60, size 0x2a0, virtual false, abstract: false, final false
inline void _ctor(::WaveHarmonic::Crest::WaterResources*  resources) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_ComputeLibrary() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ComputeLibrary", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_ComputeLibrary(WaterResources_ComputeLibrary && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ComputeLibrary", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_ComputeLibrary(WaterResources_ComputeLibrary const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16714};

/// @brief Field _BlitCompute, offset: 0x10, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_BlitCompute*  ____BlitCompute;

/// @brief Field _BlurCompute, offset: 0x18, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_BlurCompute*  ____BlurCompute;

/// @brief Field _ClearCompute, offset: 0x20, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ClearCompute*  ____ClearCompute;

/// @brief Field _ShapeCombineCompute, offset: 0x28, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute*  ____ShapeCombineCompute;

/// @brief Field _GerstnerCompute, offset: 0x30, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_GerstnerCompute*  ____GerstnerCompute;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary, ____BlitCompute) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary, ____BlurCompute) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary, ____ClearCompute) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary, ____ShapeCombineCompute) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary, ____GerstnerCompute) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_ComputeLibrary) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/UtilityCompute
class CORDL_TYPE WaterResources_UtilityCompute : public ::System::Object {
public:
// Declarations
/// @brief Field _Float1Keyword, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__Float1Keyword, put=__cordl_internal_set__Float1Keyword)) ::UnityEngine::Rendering::LocalKeyword  _Float1Keyword;

/// @brief Field _Float2Keyword, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__Float2Keyword, put=__cordl_internal_set__Float2Keyword)) ::UnityEngine::Rendering::LocalKeyword  _Float2Keyword;

/// @brief Field _Float3Keyword, offset 0x48, size 0x18 
 __declspec(property(get=__cordl_internal_get__Float3Keyword, put=__cordl_internal_set__Float3Keyword)) ::UnityEngine::Rendering::LocalKeyword  _Float3Keyword;

/// @brief Field _Float4Keyword, offset 0x60, size 0x18 
 __declspec(property(get=__cordl_internal_get__Float4Keyword, put=__cordl_internal_set__Float4Keyword)) ::UnityEngine::Rendering::LocalKeyword  _Float4Keyword;

/// @brief Field _Shader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Shader, put=__cordl_internal_set__Shader)) ::UnityW<::UnityEngine::ComputeShader>  _Shader;

static inline ::WaveHarmonic::Crest::WaterResources_UtilityCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

/// @brief Method SetVariantForFormat, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
inline void SetVariantForFormat(T  wrapper, ::UnityEngine::Experimental::Rendering::GraphicsFormat  format) ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__Float1Keyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__Float1Keyword() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__Float2Keyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__Float2Keyword() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__Float3Keyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__Float3Keyword() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__Float4Keyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__Float4Keyword() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Shader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Shader() ;

constexpr void __cordl_internal_set__Float1Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__Float2Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__Float3Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__Float4Keyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0x1825a5060, size 0x130, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_UtilityCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_UtilityCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_UtilityCompute(WaterResources_UtilityCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_UtilityCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_UtilityCompute(WaterResources_UtilityCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16715};

/// @brief Field _Shader, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Shader;

/// @brief Field _Float1Keyword, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____Float1Keyword;

/// @brief Field _Float2Keyword, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____Float2Keyword;

/// @brief Field _Float3Keyword, offset: 0x48, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____Float3Keyword;

/// @brief Field _Float4Keyword, offset: 0x60, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____Float4Keyword;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_UtilityCompute, ____Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_UtilityCompute, ____Float1Keyword) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_UtilityCompute, ____Float2Keyword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_UtilityCompute, ____Float3Keyword) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_UtilityCompute, ____Float4Keyword) == 0x60, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_UtilityCompute) == 0x78, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.WaterResources::UtilityCompute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/ClearCompute
class CORDL_TYPE WaterResources_ClearCompute : public ::WaveHarmonic::Crest::WaterResources_UtilityCompute {
public:
// Declarations
/// @brief Field _KernelClearTarget, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelClearTarget, put=__cordl_internal_set__KernelClearTarget)) int32_t  _KernelClearTarget;

/// @brief Field _KernelClearTargetBoundaryX, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelClearTargetBoundaryX, put=__cordl_internal_set__KernelClearTargetBoundaryX)) int32_t  _KernelClearTargetBoundaryX;

/// @brief Field _KernelClearTargetBoundaryY, offset 0x80, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelClearTargetBoundaryY, put=__cordl_internal_set__KernelClearTargetBoundaryY)) int32_t  _KernelClearTargetBoundaryY;

static inline ::WaveHarmonic::Crest::WaterResources_ClearCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

constexpr int32_t const& __cordl_internal_get__KernelClearTarget() const;

constexpr int32_t& __cordl_internal_get__KernelClearTarget() ;

constexpr int32_t const& __cordl_internal_get__KernelClearTargetBoundaryX() const;

constexpr int32_t& __cordl_internal_get__KernelClearTargetBoundaryX() ;

constexpr int32_t const& __cordl_internal_get__KernelClearTargetBoundaryY() const;

constexpr int32_t& __cordl_internal_get__KernelClearTargetBoundaryY() ;

constexpr void __cordl_internal_set__KernelClearTarget(int32_t  value) ;

constexpr void __cordl_internal_set__KernelClearTargetBoundaryX(int32_t  value) ;

constexpr void __cordl_internal_set__KernelClearTargetBoundaryY(int32_t  value) ;

/// @brief Method .ctor, addr 0x18259df30, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_ClearCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ClearCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_ClearCompute(WaterResources_ClearCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ClearCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_ClearCompute(WaterResources_ClearCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16716};

/// @brief Field _KernelClearTarget, offset: 0x78, size: 0x4, def value: None
 int32_t  ____KernelClearTarget;

/// @brief Field _KernelClearTargetBoundaryX, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____KernelClearTargetBoundaryX;

/// @brief Field _KernelClearTargetBoundaryY, offset: 0x80, size: 0x4, def value: None
 int32_t  ____KernelClearTargetBoundaryY;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ClearCompute, ____KernelClearTarget) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ClearCompute, ____KernelClearTargetBoundaryX) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ClearCompute, ____KernelClearTargetBoundaryY) == 0x80, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_ClearCompute) == 0x88, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.WaterResources::UtilityCompute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/BlitCompute
class CORDL_TYPE WaterResources_BlitCompute : public ::WaveHarmonic::Crest::WaterResources_UtilityCompute {
public:
// Declarations
/// @brief Field _KernelAdd, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelAdd, put=__cordl_internal_set__KernelAdd)) int32_t  _KernelAdd;

static inline ::WaveHarmonic::Crest::WaterResources_BlitCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

constexpr int32_t const& __cordl_internal_get__KernelAdd() const;

constexpr int32_t& __cordl_internal_get__KernelAdd() ;

constexpr void __cordl_internal_set__KernelAdd(int32_t  value) ;

/// @brief Method .ctor, addr 0x18259dbd0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_BlitCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_BlitCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_BlitCompute(WaterResources_BlitCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_BlitCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_BlitCompute(WaterResources_BlitCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16717};

/// @brief Field _KernelAdd, offset: 0x78, size: 0x4, def value: None
 int32_t  ____KernelAdd;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_BlitCompute, ____KernelAdd) == 0x78, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_BlitCompute) == 0x80, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.WaterResources::UtilityCompute
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/BlurCompute
class CORDL_TYPE WaterResources_BlurCompute : public ::WaveHarmonic::Crest::WaterResources_UtilityCompute {
public:
// Declarations
/// @brief Field _KernelHorizontal, offset 0x78, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelHorizontal, put=__cordl_internal_set__KernelHorizontal)) int32_t  _KernelHorizontal;

/// @brief Field _KernelVertical, offset 0x7c, size 0x4 
 __declspec(property(get=__cordl_internal_get__KernelVertical, put=__cordl_internal_set__KernelVertical)) int32_t  _KernelVertical;

static inline ::WaveHarmonic::Crest::WaterResources_BlurCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

constexpr int32_t const& __cordl_internal_get__KernelHorizontal() const;

constexpr int32_t& __cordl_internal_get__KernelHorizontal() ;

constexpr int32_t const& __cordl_internal_get__KernelVertical() const;

constexpr int32_t& __cordl_internal_get__KernelVertical() ;

constexpr void __cordl_internal_set__KernelHorizontal(int32_t  value) ;

constexpr void __cordl_internal_set__KernelVertical(int32_t  value) ;

/// @brief Method .ctor, addr 0x18259dbf0, size 0x30, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_BlurCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_BlurCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_BlurCompute(WaterResources_BlurCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_BlurCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_BlurCompute(WaterResources_BlurCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16718};

/// @brief Field _KernelHorizontal, offset: 0x78, size: 0x4, def value: None
 int32_t  ____KernelHorizontal;

/// @brief Field _KernelVertical, offset: 0x7c, size: 0x4, def value: None
 int32_t  ____KernelVertical;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_BlurCompute, ____KernelHorizontal) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_BlurCompute, ____KernelVertical) == 0x7c, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_BlurCompute) == 0x80, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/ShapeCombineCompute
class CORDL_TYPE WaterResources_ShapeCombineCompute : public ::System::Object {
public:
// Declarations
/// @brief Field _CombineAnimatedWavesKernel, offset 0x4c, size 0x4 
 __declspec(property(get=__cordl_internal_get__CombineAnimatedWavesKernel, put=__cordl_internal_set__CombineAnimatedWavesKernel)) int32_t  _CombineAnimatedWavesKernel;

/// @brief Field _CombineDynamicWavesKernel, offset 0x50, size 0x4 
 __declspec(property(get=__cordl_internal_get__CombineDynamicWavesKernel, put=__cordl_internal_set__CombineDynamicWavesKernel)) int32_t  _CombineDynamicWavesKernel;

/// @brief Field _CombineKeyword, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__CombineKeyword, put=__cordl_internal_set__CombineKeyword)) ::UnityEngine::Rendering::LocalKeyword  _CombineKeyword;

/// @brief Field _CopyAnimatedWavesKernel, offset 0x48, size 0x4 
 __declspec(property(get=__cordl_internal_get__CopyAnimatedWavesKernel, put=__cordl_internal_set__CopyAnimatedWavesKernel)) int32_t  _CopyAnimatedWavesKernel;

/// @brief Field _DynamicWavesKeyword, offset 0x30, size 0x18 
 __declspec(property(get=__cordl_internal_get__DynamicWavesKeyword, put=__cordl_internal_set__DynamicWavesKeyword)) ::UnityEngine::Rendering::LocalKeyword  _DynamicWavesKeyword;

/// @brief Field _Shader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Shader, put=__cordl_internal_set__Shader)) ::UnityW<::UnityEngine::ComputeShader>  _Shader;

static inline ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

constexpr int32_t const& __cordl_internal_get__CombineAnimatedWavesKernel() const;

constexpr int32_t& __cordl_internal_get__CombineAnimatedWavesKernel() ;

constexpr int32_t const& __cordl_internal_get__CombineDynamicWavesKernel() const;

constexpr int32_t& __cordl_internal_get__CombineDynamicWavesKernel() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__CombineKeyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__CombineKeyword() ;

constexpr int32_t const& __cordl_internal_get__CopyAnimatedWavesKernel() const;

constexpr int32_t& __cordl_internal_get__CopyAnimatedWavesKernel() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__DynamicWavesKeyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__DynamicWavesKeyword() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Shader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Shader() ;

constexpr void __cordl_internal_set__CombineAnimatedWavesKernel(int32_t  value) ;

constexpr void __cordl_internal_set__CombineDynamicWavesKernel(int32_t  value) ;

constexpr void __cordl_internal_set__CombineKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__CopyAnimatedWavesKernel(int32_t  value) ;

constexpr void __cordl_internal_set__DynamicWavesKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0x1825a3ab0, size 0xd0, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_ShapeCombineCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ShapeCombineCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_ShapeCombineCompute(WaterResources_ShapeCombineCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ShapeCombineCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_ShapeCombineCompute(WaterResources_ShapeCombineCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16719};

/// @brief Field _Shader, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Shader;

/// @brief Field _CombineKeyword, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____CombineKeyword;

/// @brief Field _DynamicWavesKeyword, offset: 0x30, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____DynamicWavesKeyword;

/// @brief Field _CopyAnimatedWavesKernel, offset: 0x48, size: 0x4, def value: None
 int32_t  ____CopyAnimatedWavesKernel;

/// @brief Field _CombineAnimatedWavesKernel, offset: 0x4c, size: 0x4, def value: None
 int32_t  ____CombineAnimatedWavesKernel;

/// @brief Field _CombineDynamicWavesKernel, offset: 0x50, size: 0x4, def value: None
 int32_t  ____CombineDynamicWavesKernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____CombineKeyword) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____DynamicWavesKeyword) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____CopyAnimatedWavesKernel) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____CombineAnimatedWavesKernel) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute, ____CombineDynamicWavesKernel) == 0x50, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute) == 0x58, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/GerstnerCompute
class CORDL_TYPE WaterResources_GerstnerCompute : public ::System::Object {
public:
// Declarations
/// @brief Field _ExecuteKernel, offset 0x30, size 0x4 
 __declspec(property(get=__cordl_internal_get__ExecuteKernel, put=__cordl_internal_set__ExecuteKernel)) int32_t  _ExecuteKernel;

/// @brief Field _Shader, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Shader, put=__cordl_internal_set__Shader)) ::UnityW<::UnityEngine::ComputeShader>  _Shader;

/// @brief Field _WavePairsKeyword, offset 0x18, size 0x18 
 __declspec(property(get=__cordl_internal_get__WavePairsKeyword, put=__cordl_internal_set__WavePairsKeyword)) ::UnityEngine::Rendering::LocalKeyword  _WavePairsKeyword;

static inline ::WaveHarmonic::Crest::WaterResources_GerstnerCompute* New_ctor(::UnityEngine::ComputeShader*  shader) ;

constexpr int32_t const& __cordl_internal_get__ExecuteKernel() const;

constexpr int32_t& __cordl_internal_get__ExecuteKernel() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Shader() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Shader() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__WavePairsKeyword() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__WavePairsKeyword() ;

constexpr void __cordl_internal_set__ExecuteKernel(int32_t  value) ;

constexpr void __cordl_internal_set__Shader(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__WavePairsKeyword(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method .ctor, addr 0x1825a0f70, size 0x90, virtual false, abstract: false, final false
inline void _ctor(::UnityEngine::ComputeShader*  shader) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_GerstnerCompute() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_GerstnerCompute", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_GerstnerCompute(WaterResources_GerstnerCompute && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_GerstnerCompute", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_GerstnerCompute(WaterResources_GerstnerCompute const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16720};

/// @brief Field _Shader, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Shader;

/// @brief Field _WavePairsKeyword, offset: 0x18, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____WavePairsKeyword;

/// @brief Field _ExecuteKernel, offset: 0x30, size: 0x4, def value: None
 int32_t  ____ExecuteKernel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_GerstnerCompute, ____Shader) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_GerstnerCompute, ____WavePairsKeyword) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_GerstnerCompute, ____ExecuteKernel) == 0x30, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_GerstnerCompute) == 0x38, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/ShaderResources
class CORDL_TYPE WaterResources_ShaderResources : public ::System::Object {
public:
// Declarations
/// @brief Field _Blit, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blit, put=__cordl_internal_set__Blit)) ::UnityW<::UnityEngine::Shader>  _Blit;

/// @brief Field _CaptureShadowMatrices, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__CaptureShadowMatrices, put=__cordl_internal_set__CaptureShadowMatrices)) ::UnityW<::UnityEngine::Shader>  _CaptureShadowMatrices;

/// @brief Field _ClipConvexHull, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipConvexHull, put=__cordl_internal_set__ClipConvexHull)) ::UnityW<::UnityEngine::Shader>  _ClipConvexHull;

/// @brief Field _ColorSpline, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__ColorSpline, put=__cordl_internal_set__ColorSpline)) ::UnityW<::UnityEngine::Shader>  _ColorSpline;

/// @brief Field _CopyDepthIntoCache, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__CopyDepthIntoCache, put=__cordl_internal_set__CopyDepthIntoCache)) ::UnityW<::UnityEngine::Shader>  _CopyDepthIntoCache;

/// @brief Field _DebugTextureArray, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__DebugTextureArray, put=__cordl_internal_set__DebugTextureArray)) ::UnityW<::UnityEngine::Shader>  _DebugTextureArray;

/// @brief Field _DepthGeometry, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthGeometry, put=__cordl_internal_set__DepthGeometry)) ::UnityW<::UnityEngine::Shader>  _DepthGeometry;

/// @brief Field _FlowSpline, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__FlowSpline, put=__cordl_internal_set__FlowSpline)) ::UnityW<::UnityEngine::Shader>  _FlowSpline;

/// @brief Field _FoamSpline, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__FoamSpline, put=__cordl_internal_set__FoamSpline)) ::UnityW<::UnityEngine::Shader>  _FoamSpline;

/// @brief Field _ForceShadows, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__ForceShadows, put=__cordl_internal_set__ForceShadows)) ::UnityW<::UnityEngine::Shader>  _ForceShadows;

/// @brief Field _HorizonMask, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__HorizonMask, put=__cordl_internal_set__HorizonMask)) ::UnityW<::UnityEngine::Shader>  _HorizonMask;

/// @brief Field _LevelGeometry, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__LevelGeometry, put=__cordl_internal_set__LevelGeometry)) ::UnityW<::UnityEngine::Shader>  _LevelGeometry;

/// @brief Field _Portals, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__Portals, put=__cordl_internal_set__Portals)) ::UnityW<::UnityEngine::Shader>  _Portals;

/// @brief Field _PortalsMask, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__PortalsMask, put=__cordl_internal_set__PortalsMask)) ::UnityW<::UnityEngine::Shader>  _PortalsMask;

/// @brief Field _ShallowWaterSimulationVisualizer, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShallowWaterSimulationVisualizer, put=__cordl_internal_set__ShallowWaterSimulationVisualizer)) ::UnityW<::UnityEngine::Shader>  _ShallowWaterSimulationVisualizer;

/// @brief Field _UnderwaterEffect, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderwaterEffect, put=__cordl_internal_set__UnderwaterEffect)) ::UnityW<::UnityEngine::Shader>  _UnderwaterEffect;

/// @brief Field _UnderwaterMask, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderwaterMask, put=__cordl_internal_set__UnderwaterMask)) ::UnityW<::UnityEngine::Shader>  _UnderwaterMask;

/// @brief Field _UpdateShadow, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateShadow, put=__cordl_internal_set__UpdateShadow)) ::UnityW<::UnityEngine::Shader>  _UpdateShadow;

/// @brief Field _WaveSpline, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__WaveSpline, put=__cordl_internal_set__WaveSpline)) ::UnityW<::UnityEngine::Shader>  _WaveSpline;

static inline ::WaveHarmonic::Crest::WaterResources_ShaderResources* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__Blit() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__Blit() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__CaptureShadowMatrices() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__CaptureShadowMatrices() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__ClipConvexHull() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__ClipConvexHull() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__ColorSpline() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__ColorSpline() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__CopyDepthIntoCache() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__CopyDepthIntoCache() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__DebugTextureArray() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__DebugTextureArray() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__DepthGeometry() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__DepthGeometry() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__FlowSpline() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__FlowSpline() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__FoamSpline() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__FoamSpline() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__ForceShadows() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__ForceShadows() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__HorizonMask() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__HorizonMask() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__LevelGeometry() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__LevelGeometry() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__Portals() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__Portals() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__PortalsMask() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__PortalsMask() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__ShallowWaterSimulationVisualizer() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__ShallowWaterSimulationVisualizer() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__UnderwaterEffect() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__UnderwaterEffect() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__UnderwaterMask() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__UnderwaterMask() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__UpdateShadow() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__UpdateShadow() ;

constexpr ::UnityW<::UnityEngine::Shader> const& __cordl_internal_get__WaveSpline() const;

constexpr ::UnityW<::UnityEngine::Shader>& __cordl_internal_get__WaveSpline() ;

constexpr void __cordl_internal_set__Blit(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__CaptureShadowMatrices(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__ClipConvexHull(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__ColorSpline(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__CopyDepthIntoCache(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__DebugTextureArray(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__DepthGeometry(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__FlowSpline(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__FoamSpline(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__ForceShadows(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__HorizonMask(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__LevelGeometry(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__Portals(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__PortalsMask(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__ShallowWaterSimulationVisualizer(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__UnderwaterEffect(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__UnderwaterMask(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__UpdateShadow(::UnityW<::UnityEngine::Shader>  value) ;

constexpr void __cordl_internal_set__WaveSpline(::UnityW<::UnityEngine::Shader>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_ShaderResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ShaderResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_ShaderResources(WaterResources_ShaderResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ShaderResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_ShaderResources(WaterResources_ShaderResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16721};

/// @brief Field _CopyDepthIntoCache, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____CopyDepthIntoCache;

/// @brief Field _ColorSpline, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____ColorSpline;

/// @brief Field _FlowSpline, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____FlowSpline;

/// @brief Field _FoamSpline, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____FoamSpline;

/// @brief Field _WaveSpline, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____WaveSpline;

/// @brief Field _DepthGeometry, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____DepthGeometry;

/// @brief Field _LevelGeometry, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____LevelGeometry;

/// @brief Field _UpdateShadow, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____UpdateShadow;

/// @brief Field _UnderwaterEffect, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____UnderwaterEffect;

/// @brief Field _UnderwaterMask, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____UnderwaterMask;

/// @brief Field _HorizonMask, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____HorizonMask;

/// @brief Field _Portals, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____Portals;

/// @brief Field _PortalsMask, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____PortalsMask;

/// @brief Field _ClipConvexHull, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____ClipConvexHull;

/// @brief Field _ShallowWaterSimulationVisualizer, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____ShallowWaterSimulationVisualizer;

/// @brief Field _DebugTextureArray, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____DebugTextureArray;

/// @brief Field _Blit, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____Blit;

/// @brief Field _ForceShadows, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____ForceShadows;

/// @brief Field _CaptureShadowMatrices, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Shader>  ____CaptureShadowMatrices;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____CopyDepthIntoCache) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____ColorSpline) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____FlowSpline) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____FoamSpline) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____WaveSpline) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____DepthGeometry) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____LevelGeometry) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____UpdateShadow) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____UnderwaterEffect) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____UnderwaterMask) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____HorizonMask) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____Portals) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____PortalsMask) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____ClipConvexHull) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____ShallowWaterSimulationVisualizer) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____DebugTextureArray) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____Blit) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____ForceShadows) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ShaderResources, ____CaptureShadowMatrices) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_ShaderResources) == 0xa8, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/ComputeResources
class CORDL_TYPE WaterResources_ComputeResources : public ::System::Object {
public:
// Declarations
/// @brief Field _AbsorptionTexture, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get__AbsorptionTexture, put=__cordl_internal_set__AbsorptionTexture)) ::UnityW<::UnityEngine::ComputeShader>  _AbsorptionTexture;

/// @brief Field _Blit, offset 0xf0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blit, put=__cordl_internal_set__Blit)) ::UnityW<::UnityEngine::ComputeShader>  _Blit;

/// @brief Field _Blur, offset 0xf8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Blur, put=__cordl_internal_set__Blur)) ::UnityW<::UnityEngine::ComputeShader>  _Blur;

/// @brief Field _Clear, offset 0xe8, size 0x8 
 __declspec(property(get=__cordl_internal_get__Clear, put=__cordl_internal_set__Clear)) ::UnityW<::UnityEngine::ComputeShader>  _Clear;

/// @brief Field _ClipPrimitive, offset 0xb8, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipPrimitive, put=__cordl_internal_set__ClipPrimitive)) ::UnityW<::UnityEngine::ComputeShader>  _ClipPrimitive;

/// @brief Field _ClipTexture, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get__ClipTexture, put=__cordl_internal_set__ClipTexture)) ::UnityW<::UnityEngine::ComputeShader>  _ClipTexture;

/// @brief Field _DepthTexture, offset 0xa8, size 0x8 
 __declspec(property(get=__cordl_internal_get__DepthTexture, put=__cordl_internal_set__DepthTexture)) ::UnityW<::UnityEngine::ComputeShader>  _DepthTexture;

/// @brief Field _FFT, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__FFT, put=__cordl_internal_set__FFT)) ::UnityW<::UnityEngine::ComputeShader>  _FFT;

/// @brief Field _FFTBake, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get__FFTBake, put=__cordl_internal_set__FFTBake)) ::UnityW<::UnityEngine::ComputeShader>  _FFTBake;

/// @brief Field _FFTSpectrum, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get__FFTSpectrum, put=__cordl_internal_set__FFTSpectrum)) ::UnityW<::UnityEngine::ComputeShader>  _FFTSpectrum;

/// @brief Field _FlowTexture, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get__FlowTexture, put=__cordl_internal_set__FlowTexture)) ::UnityW<::UnityEngine::ComputeShader>  _FlowTexture;

/// @brief Field _FoamTexture, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get__FoamTexture, put=__cordl_internal_set__FoamTexture)) ::UnityW<::UnityEngine::ComputeShader>  _FoamTexture;

/// @brief Field _Gerstner, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Gerstner, put=__cordl_internal_set__Gerstner)) ::UnityW<::UnityEngine::ComputeShader>  _Gerstner;

/// @brief Field _JumpFloodSDF, offset 0xd0, size 0x8 
 __declspec(property(get=__cordl_internal_get__JumpFloodSDF, put=__cordl_internal_set__JumpFloodSDF)) ::UnityW<::UnityEngine::ComputeShader>  _JumpFloodSDF;

/// @brief Field _LevelTexture, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get__LevelTexture, put=__cordl_internal_set__LevelTexture)) ::UnityW<::UnityEngine::ComputeShader>  _LevelTexture;

/// @brief Field _Mask, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__Mask, put=__cordl_internal_set__Mask)) ::UnityW<::UnityEngine::ComputeShader>  _Mask;

/// @brief Field _PackLevel, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get__PackLevel, put=__cordl_internal_set__PackLevel)) ::UnityW<::UnityEngine::ComputeShader>  _PackLevel;

/// @brief Field _Query, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Query, put=__cordl_internal_set__Query)) ::UnityW<::UnityEngine::ComputeShader>  _Query;

/// @brief Field _RenderDepthProbe, offset 0xc8, size 0x8 
 __declspec(property(get=__cordl_internal_get__RenderDepthProbe, put=__cordl_internal_set__RenderDepthProbe)) ::UnityW<::UnityEngine::ComputeShader>  _RenderDepthProbe;

/// @brief Field _ScatteringTexture, offset 0xb0, size 0x8 
 __declspec(property(get=__cordl_internal_get__ScatteringTexture, put=__cordl_internal_set__ScatteringTexture)) ::UnityW<::UnityEngine::ComputeShader>  _ScatteringTexture;

/// @brief Field _ShapeCombine, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShapeCombine, put=__cordl_internal_set__ShapeCombine)) ::UnityW<::UnityEngine::ComputeShader>  _ShapeCombine;

/// @brief Field _ShapeWavesTransfer, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShapeWavesTransfer, put=__cordl_internal_set__ShapeWavesTransfer)) ::UnityW<::UnityEngine::ComputeShader>  _ShapeWavesTransfer;

/// @brief Field _ShorelineColor, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get__ShorelineColor, put=__cordl_internal_set__ShorelineColor)) ::UnityW<::UnityEngine::ComputeShader>  _ShorelineColor;

/// @brief Field _SphereWaterInteraction, offset 0xc0, size 0x8 
 __declspec(property(get=__cordl_internal_get__SphereWaterInteraction, put=__cordl_internal_set__SphereWaterInteraction)) ::UnityW<::UnityEngine::ComputeShader>  _SphereWaterInteraction;

/// @brief Field _UnderwaterArtifacts, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get__UnderwaterArtifacts, put=__cordl_internal_set__UnderwaterArtifacts)) ::UnityW<::UnityEngine::ComputeShader>  _UnderwaterArtifacts;

/// @brief Field _UpdateDynamicWaves, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateDynamicWaves, put=__cordl_internal_set__UpdateDynamicWaves)) ::UnityW<::UnityEngine::ComputeShader>  _UpdateDynamicWaves;

/// @brief Field _UpdateFoam, offset 0x68, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateFoam, put=__cordl_internal_set__UpdateFoam)) ::UnityW<::UnityEngine::ComputeShader>  _UpdateFoam;

/// @brief Field _UpdateSWS, offset 0xd8, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateSWS, put=__cordl_internal_set__UpdateSWS)) ::UnityW<::UnityEngine::ComputeShader>  _UpdateSWS;

/// @brief Field _UpdateShadow, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get__UpdateShadow, put=__cordl_internal_set__UpdateShadow)) ::UnityW<::UnityEngine::ComputeShader>  _UpdateShadow;

/// @brief Field _Whirlpool, offset 0xe0, size 0x8 
 __declspec(property(get=__cordl_internal_get__Whirlpool, put=__cordl_internal_set__Whirlpool)) ::UnityW<::UnityEngine::ComputeShader>  _Whirlpool;

static inline ::WaveHarmonic::Crest::WaterResources_ComputeResources* New_ctor() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__AbsorptionTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__AbsorptionTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Blit() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Blit() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Blur() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Blur() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Clear() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Clear() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ClipPrimitive() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ClipPrimitive() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ClipTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ClipTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__DepthTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__DepthTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__FFT() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__FFT() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__FFTBake() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__FFTBake() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__FFTSpectrum() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__FFTSpectrum() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__FlowTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__FlowTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__FoamTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__FoamTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Gerstner() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Gerstner() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__JumpFloodSDF() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__JumpFloodSDF() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__LevelTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__LevelTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Mask() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Mask() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__PackLevel() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__PackLevel() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Query() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Query() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__RenderDepthProbe() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__RenderDepthProbe() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ScatteringTexture() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ScatteringTexture() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ShapeCombine() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ShapeCombine() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ShapeWavesTransfer() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ShapeWavesTransfer() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__ShorelineColor() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__ShorelineColor() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__SphereWaterInteraction() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__SphereWaterInteraction() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__UnderwaterArtifacts() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__UnderwaterArtifacts() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__UpdateDynamicWaves() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__UpdateDynamicWaves() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__UpdateFoam() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__UpdateFoam() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__UpdateSWS() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__UpdateSWS() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__UpdateShadow() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__UpdateShadow() ;

constexpr ::UnityW<::UnityEngine::ComputeShader> const& __cordl_internal_get__Whirlpool() const;

constexpr ::UnityW<::UnityEngine::ComputeShader>& __cordl_internal_get__Whirlpool() ;

constexpr void __cordl_internal_set__AbsorptionTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Blit(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Blur(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Clear(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ClipPrimitive(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ClipTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__DepthTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__FFT(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__FFTBake(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__FFTSpectrum(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__FlowTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__FoamTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Gerstner(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__JumpFloodSDF(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__LevelTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Mask(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__PackLevel(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Query(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__RenderDepthProbe(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ScatteringTexture(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ShapeCombine(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ShapeWavesTransfer(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__ShorelineColor(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__SphereWaterInteraction(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__UnderwaterArtifacts(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__UpdateDynamicWaves(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__UpdateFoam(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__UpdateSWS(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__UpdateShadow(::UnityW<::UnityEngine::ComputeShader>  value) ;

constexpr void __cordl_internal_set__Whirlpool(::UnityW<::UnityEngine::ComputeShader>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_ComputeResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ComputeResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_ComputeResources(WaterResources_ComputeResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_ComputeResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_ComputeResources(WaterResources_ComputeResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16722};

/// @brief Field _Mask, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Mask;

/// @brief Field _UnderwaterArtifacts, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____UnderwaterArtifacts;

/// @brief Field _ShapeWavesTransfer, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ShapeWavesTransfer;

/// @brief Field _Query, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Query;

/// @brief Field _Gerstner, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Gerstner;

/// @brief Field _FFT, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____FFT;

/// @brief Field _FFTBake, offset: 0x40, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____FFTBake;

/// @brief Field _FFTSpectrum, offset: 0x48, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____FFTSpectrum;

/// @brief Field _ShapeCombine, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ShapeCombine;

/// @brief Field _ShorelineColor, offset: 0x58, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ShorelineColor;

/// @brief Field _UpdateDynamicWaves, offset: 0x60, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____UpdateDynamicWaves;

/// @brief Field _UpdateFoam, offset: 0x68, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____UpdateFoam;

/// @brief Field _UpdateShadow, offset: 0x70, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____UpdateShadow;

/// @brief Field _PackLevel, offset: 0x78, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____PackLevel;

/// @brief Field _AbsorptionTexture, offset: 0x80, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____AbsorptionTexture;

/// @brief Field _ClipTexture, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ClipTexture;

/// @brief Field _FlowTexture, offset: 0x90, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____FlowTexture;

/// @brief Field _FoamTexture, offset: 0x98, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____FoamTexture;

/// @brief Field _LevelTexture, offset: 0xa0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____LevelTexture;

/// @brief Field _DepthTexture, offset: 0xa8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____DepthTexture;

/// @brief Field _ScatteringTexture, offset: 0xb0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ScatteringTexture;

/// @brief Field _ClipPrimitive, offset: 0xb8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____ClipPrimitive;

/// @brief Field _SphereWaterInteraction, offset: 0xc0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____SphereWaterInteraction;

/// @brief Field _RenderDepthProbe, offset: 0xc8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____RenderDepthProbe;

/// @brief Field _JumpFloodSDF, offset: 0xd0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____JumpFloodSDF;

/// @brief Field _UpdateSWS, offset: 0xd8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____UpdateSWS;

/// @brief Field _Whirlpool, offset: 0xe0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Whirlpool;

/// @brief Field _Clear, offset: 0xe8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Clear;

/// @brief Field _Blit, offset: 0xf0, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Blit;

/// @brief Field _Blur, offset: 0xf8, size: 0x8, def value: None
 ::UnityW<::UnityEngine::ComputeShader>  ____Blur;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Mask) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____UnderwaterArtifacts) == 0x18, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ShapeWavesTransfer) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Query) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Gerstner) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____FFT) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____FFTBake) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____FFTSpectrum) == 0x48, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ShapeCombine) == 0x50, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ShorelineColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____UpdateDynamicWaves) == 0x60, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____UpdateFoam) == 0x68, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____UpdateShadow) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____PackLevel) == 0x78, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____AbsorptionTexture) == 0x80, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ClipTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____FlowTexture) == 0x90, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____FoamTexture) == 0x98, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____LevelTexture) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____DepthTexture) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ScatteringTexture) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____ClipPrimitive) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____SphereWaterInteraction) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____RenderDepthProbe) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____JumpFloodSDF) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____UpdateSWS) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Whirlpool) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Clear) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Blit) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_ComputeResources, ____Blur) == 0xf8, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_ComputeResources) == 0x100, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies System.Object, UnityEngine.Rendering.LocalKeyword
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources/KeywordResources
class CORDL_TYPE WaterResources_KeywordResources : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_AnimatedWavesTransferWavesTexture, put=set_AnimatedWavesTransferWavesTexture)) ::UnityEngine::Rendering::LocalKeyword  AnimatedWavesTransferWavesTexture;

 __declspec(property(get=get_AnimatedWavesTransferWavesTextureBlend, put=set_AnimatedWavesTransferWavesTextureBlend)) ::UnityEngine::Rendering::LocalKeyword  AnimatedWavesTransferWavesTextureBlend;

 __declspec(property(get=get_ClipPrimitiveCube, put=set_ClipPrimitiveCube)) ::UnityEngine::Rendering::LocalKeyword  ClipPrimitiveCube;

 __declspec(property(get=get_ClipPrimitiveInverted, put=set_ClipPrimitiveInverted)) ::UnityEngine::Rendering::LocalKeyword  ClipPrimitiveInverted;

 __declspec(property(get=get_ClipPrimitiveRectangle, put=set_ClipPrimitiveRectangle)) ::UnityEngine::Rendering::LocalKeyword  ClipPrimitiveRectangle;

 __declspec(property(get=get_ClipPrimitiveSphere, put=set_ClipPrimitiveSphere)) ::UnityEngine::Rendering::LocalKeyword  ClipPrimitiveSphere;

 __declspec(property(get=get_DepthProbeBackFaceInclusion, put=set_DepthProbeBackFaceInclusion)) ::UnityEngine::Rendering::LocalKeyword  DepthProbeBackFaceInclusion;

 __declspec(property(get=get_DepthTextureSDF, put=set_DepthTextureSDF)) ::UnityEngine::Rendering::LocalKeyword  DepthTextureSDF;

 __declspec(property(get=get_JumpFloodInverted, put=set_JumpFloodInverted)) ::UnityEngine::Rendering::LocalKeyword  JumpFloodInverted;

 __declspec(property(get=get_JumpFloodStandalone, put=set_JumpFloodStandalone)) ::UnityEngine::Rendering::LocalKeyword  JumpFloodStandalone;

 __declspec(property(get=get_LevelTextureCatmullRom, put=set_LevelTextureCatmullRom)) ::UnityEngine::Rendering::LocalKeyword  LevelTextureCatmullRom;

 __declspec(property(get=get_ShorelineColorScattering, put=set_ShorelineColorScattering)) ::UnityEngine::Rendering::LocalKeyword  ShorelineColorScattering;

 __declspec(property(get=get_ShorelineColorSourceDistance, put=set_ShorelineColorSourceDistance)) ::UnityEngine::Rendering::LocalKeyword  ShorelineColorSourceDistance;

/// @brief Field <AnimatedWavesTransferWavesTextureBlend>k__BackingField, offset 0x28, size 0x18 
 __declspec(property(get=__cordl_internal_get__AnimatedWavesTransferWavesTextureBlend_k__BackingField, put=__cordl_internal_set__AnimatedWavesTransferWavesTextureBlend_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _AnimatedWavesTransferWavesTextureBlend_k__BackingField;

/// @brief Field <AnimatedWavesTransferWavesTexture>k__BackingField, offset 0x10, size 0x18 
 __declspec(property(get=__cordl_internal_get__AnimatedWavesTransferWavesTexture_k__BackingField, put=__cordl_internal_set__AnimatedWavesTransferWavesTexture_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _AnimatedWavesTransferWavesTexture_k__BackingField;

/// @brief Field <ClipPrimitiveCube>k__BackingField, offset 0x70, size 0x18 
 __declspec(property(get=__cordl_internal_get__ClipPrimitiveCube_k__BackingField, put=__cordl_internal_set__ClipPrimitiveCube_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ClipPrimitiveCube_k__BackingField;

/// @brief Field <ClipPrimitiveInverted>k__BackingField, offset 0x40, size 0x18 
 __declspec(property(get=__cordl_internal_get__ClipPrimitiveInverted_k__BackingField, put=__cordl_internal_set__ClipPrimitiveInverted_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ClipPrimitiveInverted_k__BackingField;

/// @brief Field <ClipPrimitiveRectangle>k__BackingField, offset 0x88, size 0x18 
 __declspec(property(get=__cordl_internal_get__ClipPrimitiveRectangle_k__BackingField, put=__cordl_internal_set__ClipPrimitiveRectangle_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ClipPrimitiveRectangle_k__BackingField;

/// @brief Field <ClipPrimitiveSphere>k__BackingField, offset 0x58, size 0x18 
 __declspec(property(get=__cordl_internal_get__ClipPrimitiveSphere_k__BackingField, put=__cordl_internal_set__ClipPrimitiveSphere_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ClipPrimitiveSphere_k__BackingField;

/// @brief Field <DepthProbeBackFaceInclusion>k__BackingField, offset 0x100, size 0x18 
 __declspec(property(get=__cordl_internal_get__DepthProbeBackFaceInclusion_k__BackingField, put=__cordl_internal_set__DepthProbeBackFaceInclusion_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _DepthProbeBackFaceInclusion_k__BackingField;

/// @brief Field <DepthTextureSDF>k__BackingField, offset 0xa0, size 0x18 
 __declspec(property(get=__cordl_internal_get__DepthTextureSDF_k__BackingField, put=__cordl_internal_set__DepthTextureSDF_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _DepthTextureSDF_k__BackingField;

/// @brief Field <JumpFloodInverted>k__BackingField, offset 0x118, size 0x18 
 __declspec(property(get=__cordl_internal_get__JumpFloodInverted_k__BackingField, put=__cordl_internal_set__JumpFloodInverted_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _JumpFloodInverted_k__BackingField;

/// @brief Field <JumpFloodStandalone>k__BackingField, offset 0x130, size 0x18 
 __declspec(property(get=__cordl_internal_get__JumpFloodStandalone_k__BackingField, put=__cordl_internal_set__JumpFloodStandalone_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _JumpFloodStandalone_k__BackingField;

/// @brief Field <LevelTextureCatmullRom>k__BackingField, offset 0xe8, size 0x18 
 __declspec(property(get=__cordl_internal_get__LevelTextureCatmullRom_k__BackingField, put=__cordl_internal_set__LevelTextureCatmullRom_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _LevelTextureCatmullRom_k__BackingField;

/// @brief Field <ShorelineColorScattering>k__BackingField, offset 0xd0, size 0x18 
 __declspec(property(get=__cordl_internal_get__ShorelineColorScattering_k__BackingField, put=__cordl_internal_set__ShorelineColorScattering_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ShorelineColorScattering_k__BackingField;

/// @brief Field <ShorelineColorSourceDistance>k__BackingField, offset 0xb8, size 0x18 
 __declspec(property(get=__cordl_internal_get__ShorelineColorSourceDistance_k__BackingField, put=__cordl_internal_set__ShorelineColorSourceDistance_k__BackingField)) ::UnityEngine::Rendering::LocalKeyword  _ShorelineColorSourceDistance_k__BackingField;

/// @brief Method Initialize, addr 0x1825a1000, size 0x400, virtual false, abstract: false, final false
inline void Initialize(::WaveHarmonic::Crest::WaterResources*  resources) ;

static inline ::WaveHarmonic::Crest::WaterResources_KeywordResources* New_ctor() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__AnimatedWavesTransferWavesTextureBlend_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__AnimatedWavesTransferWavesTextureBlend_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__AnimatedWavesTransferWavesTexture_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__AnimatedWavesTransferWavesTexture_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ClipPrimitiveCube_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ClipPrimitiveCube_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ClipPrimitiveInverted_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ClipPrimitiveInverted_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ClipPrimitiveRectangle_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ClipPrimitiveRectangle_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ClipPrimitiveSphere_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ClipPrimitiveSphere_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__DepthProbeBackFaceInclusion_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__DepthProbeBackFaceInclusion_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__DepthTextureSDF_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__DepthTextureSDF_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__JumpFloodInverted_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__JumpFloodInverted_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__JumpFloodStandalone_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__JumpFloodStandalone_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__LevelTextureCatmullRom_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__LevelTextureCatmullRom_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ShorelineColorScattering_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ShorelineColorScattering_k__BackingField() ;

constexpr ::UnityEngine::Rendering::LocalKeyword const& __cordl_internal_get__ShorelineColorSourceDistance_k__BackingField() const;

constexpr ::UnityEngine::Rendering::LocalKeyword& __cordl_internal_get__ShorelineColorSourceDistance_k__BackingField() ;

constexpr void __cordl_internal_set__AnimatedWavesTransferWavesTextureBlend_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__AnimatedWavesTransferWavesTexture_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ClipPrimitiveCube_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ClipPrimitiveInverted_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ClipPrimitiveRectangle_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ClipPrimitiveSphere_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__DepthProbeBackFaceInclusion_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__DepthTextureSDF_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__JumpFloodInverted_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__JumpFloodStandalone_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__LevelTextureCatmullRom_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ShorelineColorScattering_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

constexpr void __cordl_internal_set__ShorelineColorSourceDistance_k__BackingField(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_AnimatedWavesTransferWavesTexture, addr 0x180347870, size 0x1f0, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_AnimatedWavesTransferWavesTexture() ;

/// @brief Method get_AnimatedWavesTransferWavesTextureBlend, addr 0x180503b20, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_AnimatedWavesTransferWavesTextureBlend() ;

/// @brief Method get_ClipPrimitiveCube, addr 0x1825a1400, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ClipPrimitiveCube() ;

/// @brief Method get_ClipPrimitiveInverted, addr 0x18169a410, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ClipPrimitiveInverted() ;

/// @brief Method get_ClipPrimitiveRectangle, addr 0x1825a1420, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ClipPrimitiveRectangle() ;

/// @brief Method get_ClipPrimitiveSphere, addr 0x1825a1440, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ClipPrimitiveSphere() ;

/// @brief Method get_DepthProbeBackFaceInclusion, addr 0x1825a1460, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_DepthProbeBackFaceInclusion() ;

/// @brief Method get_DepthTextureSDF, addr 0x1825a1480, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_DepthTextureSDF() ;

/// @brief Method get_JumpFloodInverted, addr 0x1825a14a0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_JumpFloodInverted() ;

/// @brief Method get_JumpFloodStandalone, addr 0x1825a14c0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_JumpFloodStandalone() ;

/// @brief Method get_LevelTextureCatmullRom, addr 0x1825a14e0, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_LevelTextureCatmullRom() ;

/// @brief Method get_ShorelineColorScattering, addr 0x1825a1500, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ShorelineColorScattering() ;

/// @brief Method get_ShorelineColorSourceDistance, addr 0x1825a1520, size 0x20, virtual false, abstract: false, final false
inline ::UnityEngine::Rendering::LocalKeyword get_ShorelineColorSourceDistance() ;

/// @brief Method set_AnimatedWavesTransferWavesTexture, addr 0x1804f67e0, size 0x20, virtual false, abstract: false, final false
inline void set_AnimatedWavesTransferWavesTexture(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_AnimatedWavesTransferWavesTextureBlend, addr 0x180a260f0, size 0x3a0, virtual false, abstract: false, final false
inline void set_AnimatedWavesTransferWavesTextureBlend(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ClipPrimitiveCube, addr 0x1825a1540, size 0x20, virtual false, abstract: false, final false
inline void set_ClipPrimitiveCube(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ClipPrimitiveInverted, addr 0x1825a1560, size 0x20, virtual false, abstract: false, final false
inline void set_ClipPrimitiveInverted(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ClipPrimitiveRectangle, addr 0x1825a1580, size 0x30, virtual false, abstract: false, final false
inline void set_ClipPrimitiveRectangle(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ClipPrimitiveSphere, addr 0x1825a15b0, size 0x20, virtual false, abstract: false, final false
inline void set_ClipPrimitiveSphere(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_DepthProbeBackFaceInclusion, addr 0x1825a15d0, size 0x30, virtual false, abstract: false, final false
inline void set_DepthProbeBackFaceInclusion(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_DepthTextureSDF, addr 0x1825a1600, size 0x30, virtual false, abstract: false, final false
inline void set_DepthTextureSDF(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_JumpFloodInverted, addr 0x1825a1630, size 0x30, virtual false, abstract: false, final false
inline void set_JumpFloodInverted(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_JumpFloodStandalone, addr 0x1825a1660, size 0x30, virtual false, abstract: false, final false
inline void set_JumpFloodStandalone(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_LevelTextureCatmullRom, addr 0x1825a1690, size 0x30, virtual false, abstract: false, final false
inline void set_LevelTextureCatmullRom(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ShorelineColorScattering, addr 0x1825a16c0, size 0x30, virtual false, abstract: false, final false
inline void set_ShorelineColorScattering(::UnityEngine::Rendering::LocalKeyword  value) ;

/// @brief Method set_ShorelineColorSourceDistance, addr 0x1825a16f0, size 0x30, virtual false, abstract: false, final false
inline void set_ShorelineColorSourceDistance(::UnityEngine::Rendering::LocalKeyword  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources_KeywordResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_KeywordResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources_KeywordResources(WaterResources_KeywordResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources_KeywordResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources_KeywordResources(WaterResources_KeywordResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16723};

/// @brief Field <AnimatedWavesTransferWavesTexture>k__BackingField, offset: 0x10, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____AnimatedWavesTransferWavesTexture_k__BackingField;

/// @brief Field <AnimatedWavesTransferWavesTextureBlend>k__BackingField, offset: 0x28, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____AnimatedWavesTransferWavesTextureBlend_k__BackingField;

/// @brief Field <ClipPrimitiveInverted>k__BackingField, offset: 0x40, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ClipPrimitiveInverted_k__BackingField;

/// @brief Field <ClipPrimitiveSphere>k__BackingField, offset: 0x58, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ClipPrimitiveSphere_k__BackingField;

/// @brief Field <ClipPrimitiveCube>k__BackingField, offset: 0x70, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ClipPrimitiveCube_k__BackingField;

/// @brief Field <ClipPrimitiveRectangle>k__BackingField, offset: 0x88, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ClipPrimitiveRectangle_k__BackingField;

/// @brief Field <DepthTextureSDF>k__BackingField, offset: 0xa0, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____DepthTextureSDF_k__BackingField;

/// @brief Field <ShorelineColorSourceDistance>k__BackingField, offset: 0xb8, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ShorelineColorSourceDistance_k__BackingField;

/// @brief Field <ShorelineColorScattering>k__BackingField, offset: 0xd0, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____ShorelineColorScattering_k__BackingField;

/// @brief Field <LevelTextureCatmullRom>k__BackingField, offset: 0xe8, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____LevelTextureCatmullRom_k__BackingField;

/// @brief Field <DepthProbeBackFaceInclusion>k__BackingField, offset: 0x100, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____DepthProbeBackFaceInclusion_k__BackingField;

/// @brief Field <JumpFloodInverted>k__BackingField, offset: 0x118, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____JumpFloodInverted_k__BackingField;

/// @brief Field <JumpFloodStandalone>k__BackingField, offset: 0x130, size: 0x18, def value: None
 ::UnityEngine::Rendering::LocalKeyword  ____JumpFloodStandalone_k__BackingField;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____AnimatedWavesTransferWavesTexture_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____AnimatedWavesTransferWavesTextureBlend_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ClipPrimitiveInverted_k__BackingField) == 0x40, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ClipPrimitiveSphere_k__BackingField) == 0x58, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ClipPrimitiveCube_k__BackingField) == 0x70, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ClipPrimitiveRectangle_k__BackingField) == 0x88, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____DepthTextureSDF_k__BackingField) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ShorelineColorSourceDistance_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____ShorelineColorScattering_k__BackingField) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____LevelTextureCatmullRom_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____DepthProbeBackFaceInclusion_k__BackingField) == 0x100, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____JumpFloodInverted_k__BackingField) == 0x118, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources_KeywordResources, ____JumpFloodStandalone_k__BackingField) == 0x130, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources_KeywordResources) == 0x148, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
// Dependencies WaveHarmonic.Crest.Utility.ScriptableSingleton`1<T>
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.WaterResources
class CORDL_TYPE WaterResources : public ::WaveHarmonic::Crest::Utility::ScriptableSingleton_1<::UnityW<::WaveHarmonic::Crest::WaterResources>> {
public:
// Declarations
using BlitCompute = ::WaveHarmonic::Crest::WaterResources_BlitCompute;

using BlurCompute = ::WaveHarmonic::Crest::WaterResources_BlurCompute;

using ClearCompute = ::WaveHarmonic::Crest::WaterResources_ClearCompute;

using ComputeLibrary = ::WaveHarmonic::Crest::WaterResources_ComputeLibrary;

using ComputeResources = ::WaveHarmonic::Crest::WaterResources_ComputeResources;

using GerstnerCompute = ::WaveHarmonic::Crest::WaterResources_GerstnerCompute;

using KeywordResources = ::WaveHarmonic::Crest::WaterResources_KeywordResources;

using ShaderResources = ::WaveHarmonic::Crest::WaterResources_ShaderResources;

using ShapeCombineCompute = ::WaveHarmonic::Crest::WaterResources_ShapeCombineCompute;

using UtilityCompute = ::WaveHarmonic::Crest::WaterResources_UtilityCompute;

/// @brief Field AfterEnabled, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_AfterEnabled, put=__cordl_internal_set_AfterEnabled)) ::System::Action*  AfterEnabled;

 __declspec(property(get=get_Compute)) ::WaveHarmonic::Crest::WaterResources_ComputeResources*  Compute;

 __declspec(property(get=get_Keywords)) ::WaveHarmonic::Crest::WaterResources_KeywordResources*  Keywords;

 __declspec(property(get=get_Shaders)) ::WaveHarmonic::Crest::WaterResources_ShaderResources*  Shaders;

/// @brief Field _Compute, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get__Compute, put=__cordl_internal_set__Compute)) ::WaveHarmonic::Crest::WaterResources_ComputeResources*  _Compute;

/// @brief Field _ComputeLibrary, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get__ComputeLibrary, put=__cordl_internal_set__ComputeLibrary)) ::WaveHarmonic::Crest::WaterResources_ComputeLibrary*  _ComputeLibrary;

/// @brief Field <Keywords>k__BackingField, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get__Keywords_k__BackingField, put=__cordl_internal_set__Keywords_k__BackingField)) ::WaveHarmonic::Crest::WaterResources_KeywordResources*  _Keywords_k__BackingField;

/// @brief Field _Shaders, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get__Shaders, put=__cordl_internal_set__Shaders)) ::WaveHarmonic::Crest::WaterResources_ShaderResources*  _Shaders;

/// @brief Method Initialize, addr 0x1825a6230, size 0x80, virtual false, abstract: false, final false
inline void Initialize() ;

static inline ::WaveHarmonic::Crest::WaterResources* New_ctor() ;

/// @brief Method OnEnable, addr 0x1825a62b0, size 0x90, virtual false, abstract: false, final false
inline void OnEnable() ;

constexpr ::System::Action* const& __cordl_internal_get_AfterEnabled() const;

constexpr ::System::Action*& __cordl_internal_get_AfterEnabled() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ComputeResources* const& __cordl_internal_get__Compute() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ComputeResources*& __cordl_internal_get__Compute() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ComputeLibrary* const& __cordl_internal_get__ComputeLibrary() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ComputeLibrary*& __cordl_internal_get__ComputeLibrary() ;

constexpr ::WaveHarmonic::Crest::WaterResources_KeywordResources* const& __cordl_internal_get__Keywords_k__BackingField() const;

constexpr ::WaveHarmonic::Crest::WaterResources_KeywordResources*& __cordl_internal_get__Keywords_k__BackingField() ;

constexpr ::WaveHarmonic::Crest::WaterResources_ShaderResources* const& __cordl_internal_get__Shaders() const;

constexpr ::WaveHarmonic::Crest::WaterResources_ShaderResources*& __cordl_internal_get__Shaders() ;

constexpr void __cordl_internal_set_AfterEnabled(::System::Action*  value) ;

constexpr void __cordl_internal_set__Compute(::WaveHarmonic::Crest::WaterResources_ComputeResources*  value) ;

constexpr void __cordl_internal_set__ComputeLibrary(::WaveHarmonic::Crest::WaterResources_ComputeLibrary*  value) ;

constexpr void __cordl_internal_set__Keywords_k__BackingField(::WaveHarmonic::Crest::WaterResources_KeywordResources*  value) ;

constexpr void __cordl_internal_set__Shaders(::WaveHarmonic::Crest::WaterResources_ShaderResources*  value) ;

/// @brief Method .ctor, addr 0x1825a6340, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method add_AfterEnabled, addr 0x18062c460, size 0x80, virtual false, abstract: false, final false
inline void add_AfterEnabled(::System::Action*  value) ;

/// @brief Method get_Compute, addr 0x1802d97f0, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterResources_ComputeResources* get_Compute() ;

/// @brief Method get_Keywords, addr 0x1802d9800, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterResources_KeywordResources* get_Keywords() ;

/// @brief Method get_Shaders, addr 0x1802d9810, size 0x10, virtual false, abstract: false, final false
inline ::WaveHarmonic::Crest::WaterResources_ShaderResources* get_Shaders() ;

/// @brief Method remove_AfterEnabled, addr 0x18062c5f0, size 0x80, virtual false, abstract: false, final false
inline void remove_AfterEnabled(::System::Action*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr WaterResources() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "WaterResources", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
WaterResources(WaterResources && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "WaterResources", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
WaterResources(WaterResources const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16724};

/// @brief Field _ComputeLibrary, offset: 0x20, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ComputeLibrary*  ____ComputeLibrary;

/// @brief Field _Shaders, offset: 0x28, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ShaderResources*  ____Shaders;

/// @brief Field _Compute, offset: 0x30, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_ComputeResources*  ____Compute;

/// @brief Field <Keywords>k__BackingField, offset: 0x38, size: 0x8, def value: None
 ::WaveHarmonic::Crest::WaterResources_KeywordResources*  ____Keywords_k__BackingField;

/// @brief Field AfterEnabled, offset: 0x40, size: 0x8, def value: None
 ::System::Action*  ___AfterEnabled;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::WaveHarmonic::Crest::WaterResources, ____ComputeLibrary) == 0x20, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources, ____Shaders) == 0x28, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources, ____Compute) == 0x30, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources, ____Keywords_k__BackingField) == 0x38, "Offset mismatch!");

static_assert(offsetof(::WaveHarmonic::Crest::WaterResources, ___AfterEnabled) == 0x40, "Offset mismatch!");

static_assert(sizeof(::WaveHarmonic::Crest::WaterResources) == 0x48, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
