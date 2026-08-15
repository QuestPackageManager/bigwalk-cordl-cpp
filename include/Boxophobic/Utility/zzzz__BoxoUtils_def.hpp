#pragma once
// IWYU pragma private; include "Boxophobic/Utility/BoxoUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BoxoUtils)
namespace Boxophobic::Utility {
class BoxoUtils_BoxoGlobals;
}
namespace Boxophobic::Utility {
class BoxoUtils_ProjectData;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace Boxophobic::Utility {
class BoxoUtils;
}
namespace Boxophobic::Utility {
class BoxoUtils_BoxoGlobals;
}
namespace Boxophobic::Utility {
class BoxoUtils_ProjectData;
}
// Write type traits
MARK_REF_T(::Boxophobic::Utility::BoxoUtils*);
MARK_REF_T(::Boxophobic::Utility::BoxoUtils_BoxoGlobals*);
MARK_REF_T(::Boxophobic::Utility::BoxoUtils_ProjectData*);
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::BoxoUtils*, "Boxophobic.Utility", "BoxoUtils");
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::BoxoUtils_BoxoGlobals*, "Boxophobic.Utility", "BoxoUtils/BoxoGlobals");
DEFINE_IL2CPP_CLASS(::Boxophobic::Utility::BoxoUtils_ProjectData*, "Boxophobic.Utility", "BoxoUtils/ProjectData");
// Dependencies System.Object
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.BoxoUtils/BoxoGlobals
class CORDL_TYPE BoxoUtils_BoxoGlobals : public ::System::Object {
public:
// Declarations
/// @brief Field userFolder, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_userFolder, put=setStaticF_userFolder)) ::StringW  userFolder;

static inline ::Boxophobic::Utility::BoxoUtils_BoxoGlobals* New_ctor() ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::StringW getStaticF_userFolder() ;

static inline void setStaticF_userFolder(::StringW  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxoUtils_BoxoGlobals() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils_BoxoGlobals", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxoUtils_BoxoGlobals(BoxoUtils_BoxoGlobals && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils_BoxoGlobals", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxoUtils_BoxoGlobals(BoxoUtils_BoxoGlobals const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21195};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::Utility::BoxoUtils_BoxoGlobals) == 0x10, "Size mismatch!");

} // namespace end def Boxophobic::Utility
// Dependencies System.Object
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.BoxoUtils/ProjectData
class CORDL_TYPE BoxoUtils_ProjectData : public ::System::Object {
public:
// Declarations
/// @brief Field isAlphaOrBetaRelease, offset 0x2a, size 0x1 
 __declspec(property(get=__cordl_internal_get_isAlphaOrBetaRelease, put=__cordl_internal_set_isAlphaOrBetaRelease)) bool  isAlphaOrBetaRelease;

/// @brief Field isSupported, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_isSupported, put=__cordl_internal_set_isSupported)) bool  isSupported;

/// @brief Field isTechRelease, offset 0x29, size 0x1 
 __declspec(property(get=__cordl_internal_get_isTechRelease, put=__cordl_internal_set_isTechRelease)) bool  isTechRelease;

/// @brief Field minimum, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_minimum, put=__cordl_internal_set_minimum)) ::StringW  minimum;

/// @brief Field package, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_package, put=__cordl_internal_set_package)) ::StringW  package;

/// @brief Field pipeline, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_pipeline, put=__cordl_internal_set_pipeline)) ::StringW  pipeline;

static inline ::Boxophobic::Utility::BoxoUtils_ProjectData* New_ctor() ;

constexpr bool const& __cordl_internal_get_isAlphaOrBetaRelease() const;

constexpr bool& __cordl_internal_get_isAlphaOrBetaRelease() ;

constexpr bool const& __cordl_internal_get_isSupported() const;

constexpr bool& __cordl_internal_get_isSupported() ;

constexpr bool const& __cordl_internal_get_isTechRelease() const;

constexpr bool& __cordl_internal_get_isTechRelease() ;

constexpr ::StringW const& __cordl_internal_get_minimum() const;

constexpr ::StringW& __cordl_internal_get_minimum() ;

constexpr ::StringW const& __cordl_internal_get_package() const;

constexpr ::StringW& __cordl_internal_get_package() ;

constexpr ::StringW const& __cordl_internal_get_pipeline() const;

constexpr ::StringW& __cordl_internal_get_pipeline() ;

constexpr void __cordl_internal_set_isAlphaOrBetaRelease(bool  value) ;

constexpr void __cordl_internal_set_isSupported(bool  value) ;

constexpr void __cordl_internal_set_isTechRelease(bool  value) ;

constexpr void __cordl_internal_set_minimum(::StringW  value) ;

constexpr void __cordl_internal_set_package(::StringW  value) ;

constexpr void __cordl_internal_set_pipeline(::StringW  value) ;

/// @brief Method .ctor, addr 0x1804bc960, size 0x70, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxoUtils_ProjectData() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils_ProjectData", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxoUtils_ProjectData(BoxoUtils_ProjectData && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils_ProjectData", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxoUtils_ProjectData(BoxoUtils_ProjectData const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21196};

/// @brief Field pipeline, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___pipeline;

/// @brief Field minimum, offset: 0x18, size: 0x8, def value: None
 ::StringW  ___minimum;

/// @brief Field package, offset: 0x20, size: 0x8, def value: None
 ::StringW  ___package;

/// @brief Field isSupported, offset: 0x28, size: 0x1, def value: None
 bool  ___isSupported;

/// @brief Field isTechRelease, offset: 0x29, size: 0x1, def value: None
 bool  ___isTechRelease;

/// @brief Field isAlphaOrBetaRelease, offset: 0x2a, size: 0x1, def value: None
 bool  ___isAlphaOrBetaRelease;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___pipeline) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___minimum) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___package) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___isSupported) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___isTechRelease) == 0x29, "Offset mismatch!");

static_assert(offsetof(::Boxophobic::Utility::BoxoUtils_ProjectData, ___isAlphaOrBetaRelease) == 0x2a, "Offset mismatch!");

static_assert(sizeof(::Boxophobic::Utility::BoxoUtils_ProjectData) == 0x30, "Size mismatch!");

} // namespace end def Boxophobic::Utility
// Dependencies System.Object
namespace Boxophobic::Utility {
// Is value type: false
// CS Name: Boxophobic.Utility.BoxoUtils
class CORDL_TYPE BoxoUtils : public ::System::Object {
public:
// Declarations
using BoxoGlobals = ::Boxophobic::Utility::BoxoUtils_BoxoGlobals;

using ProjectData = ::Boxophobic::Utility::BoxoUtils_ProjectData;

/// @brief Method DestryObject, addr 0x1804b9a20, size 0x10, virtual false, abstract: false, final false
static inline void DestryObject(::UnityEngine::Object*  objectToDestory) ;

/// @brief Method DisableServerExecution, addr 0x1804b9a30, size 0x30, virtual false, abstract: false, final false
static inline bool DisableServerExecution() ;

/// @brief Method FormatMessage, addr 0x1804b9d70, size 0x4d0, virtual false, abstract: false, final false
static inline ::StringW FormatMessage(::StringW  message) ;

/// @brief Method FormatMessageReverse, addr 0x1804b9a60, size 0x310, virtual false, abstract: false, final false
static inline ::StringW FormatMessageReverse(::StringW  message) ;

/// @brief Method GetMaterialFloat, addr 0x1804ba2a0, size 0x60, virtual false, abstract: false, final false
static inline float_t GetMaterialFloat(::UnityEngine::Material*  material, ::StringW  property) ;

/// @brief Method GetMaterialFloat, addr 0x1804ba240, size 0x60, virtual false, abstract: false, final false
static inline float_t GetMaterialFloat(::UnityEngine::Material*  material, ::StringW  property, float_t  defaultValue) ;

/// @brief Method GetMaterialInt, addr 0x1804ba300, size 0x50, virtual false, abstract: false, final false
static inline int32_t GetMaterialInt(::UnityEngine::Material*  material, ::StringW  property) ;

/// @brief Method GetMaterialInt, addr 0x1804ba350, size 0x60, virtual false, abstract: false, final false
static inline int32_t GetMaterialInt(::UnityEngine::Material*  material, ::StringW  property, int32_t  defaultValue) ;

/// @brief Method GetMaterialTexture, addr 0x1804ba3b0, size 0x60, virtual false, abstract: false, final false
static inline ::UnityW<::UnityEngine::Texture> GetMaterialTexture(::UnityEngine::Material*  material, ::StringW  property) ;

/// @brief Method GetProjectData, addr 0x1804ba410, size 0x730, virtual false, abstract: false, final false
static inline ::Boxophobic::Utility::BoxoUtils_ProjectData* GetProjectData() ;

/// @brief Method GetProjectPipeline, addr 0x1804bab40, size 0x1c0, virtual false, abstract: false, final false
static inline ::StringW GetProjectPipeline() ;

/// @brief Method IsMaterialTextureUsed, addr 0x1804bad00, size 0x70, virtual false, abstract: false, final false
static inline bool IsMaterialTextureUsed(::UnityEngine::Material*  material, ::StringW  property) ;

/// @brief Method MathFloatFromVector2, addr 0x1804bad70, size 0x60, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 MathFloatFromVector2(float_t  input) ;

/// @brief Method MathRemap, addr 0x1804badd0, size 0x10, virtual false, abstract: false, final false
static inline float_t MathRemap(float_t  value, float_t  minOld, float_t  maxOld) ;

/// @brief Method MathRemap, addr 0x1804bade0, size 0x20, virtual false, abstract: false, final false
static inline float_t MathRemap(float_t  value, float_t  minOld, float_t  maxOld, float_t  minNew, float_t  maxNew) ;

/// @brief Method MathVector2ToFloat, addr 0x1804bae00, size 0x60, virtual false, abstract: false, final false
static inline float_t MathVector2ToFloat(float_t  x, float_t  y) ;

/// @brief Method SetMaterialBackface, addr 0x1804baef0, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialBackface(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp) ;

/// @brief Method SetMaterialBackfaceLegacy, addr 0x1804bae60, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialBackfaceLegacy(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp) ;

/// @brief Method SetMaterialBool, addr 0x1804baf80, size 0x70, virtual false, abstract: false, final false
static inline void SetMaterialBool(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialBounds, addr 0x1804baff0, size 0x120, virtual false, abstract: false, final false
static inline void SetMaterialBounds(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialCoords, addr 0x1804bb110, size 0x100, virtual false, abstract: false, final false
static inline void SetMaterialCoords(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialFloat, addr 0x1804bb210, size 0x60, virtual false, abstract: false, final false
static inline void SetMaterialFloat(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialInt, addr 0x1804bb270, size 0x60, virtual false, abstract: false, final false
static inline void SetMaterialInt(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bbaa0, size 0x1a0, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  parents, ::StringW  property, ::StringW  keyword) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb8b0, size 0x1f0, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  parents, ::StringW  property, ::ArrayW<::StringW>  keywords) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb510, size 0x150, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, bool  allParentsOn, ::ArrayW<::StringW>  properties, ::StringW  keyword) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb660, size 0x40, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  keyword, bool  enable) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb730, size 0xc0, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  parent, ::StringW  property, ::StringW  keyword) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb3f0, size 0x120, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  parent, ::StringW  property, ::ArrayW<::StringW>  keywords) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb6a0, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword) ;

/// @brief Method SetMaterialKeyword, addr 0x1804bb7f0, size 0xc0, virtual false, abstract: false, final false
static inline void SetMaterialKeyword(::UnityEngine::Material*  material, ::StringW  property, ::ArrayW<::StringW>  keywords) ;

/// @brief Method SetMaterialKeywordByTexture, addr 0x1804bb2d0, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialKeywordByTexture(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword) ;

/// @brief Method SetMaterialKeywordInverted, addr 0x1804bb360, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialKeywordInverted(::UnityEngine::Material*  material, ::StringW  property, ::StringW  keyword) ;

/// @brief Method SetMaterialOptions, addr 0x1804bbc40, size 0xa0, virtual false, abstract: false, final false
static inline void SetMaterialOptions(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valueProp) ;

/// @brief Method SetMaterialOptions, addr 0x1804bbce0, size 0x1b0, virtual false, abstract: false, final false
static inline void SetMaterialOptions(::UnityEngine::Material*  material, ::StringW  modeProp, ::StringW  valuePropA, ::StringW  valuePropB) ;

/// @brief Method SetMaterialReciprocal, addr 0x1804bbe90, size 0x90, virtual false, abstract: false, final false
static inline void SetMaterialReciprocal(::UnityEngine::Material*  material, ::StringW  valueProp) ;

/// @brief Method SetMaterialTexture, addr 0x1804bbfc0, size 0x60, virtual false, abstract: false, final false
static inline void SetMaterialTexture(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp) ;

/// @brief Method SetMaterialTextureSpace, addr 0x1804bbf20, size 0xa0, virtual false, abstract: false, final false
static inline void SetMaterialTextureSpace(::UnityEngine::Material*  material, ::StringW  texProp, ::StringW  spaceProp) ;

/// @brief Method SetMaterialVector, addr 0x1804bc020, size 0x70, virtual false, abstract: false, final false
static inline void SetMaterialVector(::UnityEngine::Material*  material, ::StringW  valueProp, ::StringW  internalProp) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BoxoUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BoxoUtils(BoxoUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BoxoUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BoxoUtils(BoxoUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21197};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Boxophobic::Utility::BoxoUtils) == 0x10, "Size mismatch!");

} // namespace end def Boxophobic::Utility
