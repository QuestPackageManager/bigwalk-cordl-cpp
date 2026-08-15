#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/ObjectUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ObjectUtil)
namespace JBooth::MicroVerseCore {
class OcclusionData;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class ObjectUtil;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::ObjectUtil*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::ObjectUtil*, "JBooth.MicroVerseCore", "ObjectUtil");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.ObjectUtil
class CORDL_TYPE ObjectUtil : public ::System::Object {
public:
// Declarations
/// @brief Field _Positions, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Positions, put=setStaticF__Positions)) int32_t  _Positions;

/// @brief Field _Result, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Result, put=setStaticF__Result)) int32_t  _Result;

/// @brief Field _Result_Height, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Result_Height, put=setStaticF__Result_Height)) int32_t  _Result_Height;

/// @brief Field _Result_Width, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF__Result_Width, put=setStaticF__Result_Width)) int32_t  _Result_Width;

/// @brief Field occlusionShader, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_occlusionShader, put=setStaticF_occlusionShader)) ::UnityW<::UnityEngine::ComputeShader>  occlusionShader;

/// @brief Method ApplyOcclusion, addr 0x18140d8c0, size 0x440, virtual false, abstract: false, final false
static inline void ApplyOcclusion(::UnityEngine::RenderTexture*  positions, ::JBooth::MicroVerseCore::OcclusionData*  od, bool  others, bool  selfSDF) ;

static inline ::JBooth::MicroVerseCore::ObjectUtil* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline int32_t getStaticF__Positions() ;

static inline int32_t getStaticF__Result() ;

static inline int32_t getStaticF__Result_Height() ;

static inline int32_t getStaticF__Result_Width() ;

static inline ::UnityW<::UnityEngine::ComputeShader> getStaticF_occlusionShader() ;

static inline void setStaticF__Positions(int32_t  value) ;

static inline void setStaticF__Result(int32_t  value) ;

static inline void setStaticF__Result_Height(int32_t  value) ;

static inline void setStaticF__Result_Width(int32_t  value) ;

static inline void setStaticF_occlusionShader(::UnityW<::UnityEngine::ComputeShader>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ObjectUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ObjectUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ObjectUtil(ObjectUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ObjectUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ObjectUtil(ObjectUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17917};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::JBooth::MicroVerseCore::ObjectUtil) == 0x10, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
