#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/BufferCaptureTarget.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(BufferCaptureTarget)
namespace JBooth::MicroVerseCore {
struct BufferCaptureTarget_BufferCapture;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget_TextureEntry;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget_TextureList;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class TerrainData;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
struct BufferCaptureTarget_BufferCapture;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget_TextureEntry;
}
namespace JBooth::MicroVerseCore {
class BufferCaptureTarget_TextureList;
}
// Write type traits
MARK_VAL_T(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture);
MARK_REF_T(::JBooth::MicroVerseCore::BufferCaptureTarget*);
MARK_REF_T(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*);
MARK_REF_T(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture, "JBooth.MicroVerseCore", "BufferCaptureTarget/BufferCapture");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BufferCaptureTarget*, "JBooth.MicroVerseCore", "BufferCaptureTarget");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*, "JBooth.MicroVerseCore", "BufferCaptureTarget/TextureEntry");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*, "JBooth.MicroVerseCore", "BufferCaptureTarget/TextureList");
// Dependencies 
namespace JBooth::MicroVerseCore {
// Is value type: true
// CS Name: JBooth.MicroVerseCore.BufferCaptureTarget/BufferCapture
struct CORDL_TYPE BufferCaptureTarget_BufferCapture {
public:
// Declarations
using __CORDL_BACKING_ENUM_TYPE = int32_t;

/// @brief Nested struct __BufferCaptureTarget_BufferCapture_Unwrapped
enum struct __BufferCaptureTarget_BufferCapture_Unwrapped : int32_t {
__E_None = static_cast<int32_t>(0x0),
__E_CurvatureMap = static_cast<int32_t>(0x1),
__E_FlowMap = static_cast<int32_t>(0x100),
__E_TreeStampOcclusionMask = static_cast<int32_t>(0x2),
__E_TreeStampSDF = static_cast<int32_t>(0x4),
__E_CombinedOcclusionMask = static_cast<int32_t>(0x8),
__E_CombinedTreeSDF = static_cast<int32_t>(0x10),
__E_ObjectStampOcclusionMask = static_cast<int32_t>(0x20),
__E_ObjectStampSDF = static_cast<int32_t>(0x40),
__E_CombinedObjectStampSDF = static_cast<int32_t>(0x80),
};

/// @brief Conversion into unwrapped enum value
constexpr operator __BufferCaptureTarget_BufferCapture_Unwrapped () const noexcept {
return static_cast<__BufferCaptureTarget_BufferCapture_Unwrapped>(this->value__);
}

/// @brief Conversion into unwrapped enum value
constexpr explicit operator int32_t () const noexcept {
return static_cast<int32_t>(this->value__);
}

// Ctor Parameters []
// @brief default ctor
constexpr BufferCaptureTarget_BufferCapture() ;

// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr BufferCaptureTarget_BufferCapture(int32_t  value__) noexcept;

/// @brief Field CombinedObjectStampSDF value: I32(128)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const CombinedObjectStampSDF;

/// @brief Field CombinedOcclusionMask value: I32(8)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const CombinedOcclusionMask;

/// @brief Field CombinedTreeSDF value: I32(16)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const CombinedTreeSDF;

/// @brief Field CurvatureMap value: I32(1)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const CurvatureMap;

/// @brief Field FlowMap value: I32(256)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const FlowMap;

/// @brief Field None value: I32(0)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const None;

/// @brief Field ObjectStampOcclusionMask value: I32(32)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const ObjectStampOcclusionMask;

/// @brief Field ObjectStampSDF value: I32(64)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const ObjectStampSDF;

/// @brief Field TreeStampOcclusionMask value: I32(2)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const TreeStampOcclusionMask;

/// @brief Field TreeStampSDF value: I32(4)
static ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const TreeStampSDF;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17902};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field value__, offset: 0x4, size: 0x4, def value: None
 int32_t  value__;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture, value__) == 0x4, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture) == 0x4, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BufferCaptureTarget/TextureList
class CORDL_TYPE BufferCaptureTarget_TextureList : public ::System::Object {
public:
// Declarations
/// @brief Field allObjectSDF, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_allObjectSDF, put=__cordl_internal_set_allObjectSDF)) ::UnityW<::UnityEngine::Texture2D>  allObjectSDF;

/// @brief Field allTreeSDF, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_allTreeSDF, put=__cordl_internal_set_allTreeSDF)) ::UnityW<::UnityEngine::Texture2D>  allTreeSDF;

/// @brief Field curvatureMap, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_curvatureMap, put=__cordl_internal_set_curvatureMap)) ::UnityW<::UnityEngine::Texture2D>  curvatureMap;

/// @brief Field flowMap, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_flowMap, put=__cordl_internal_set_flowMap)) ::UnityW<::UnityEngine::Texture2D>  flowMap;

/// @brief Field objectStampOcclusion, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectStampOcclusion, put=__cordl_internal_set_objectStampOcclusion)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  objectStampOcclusion;

/// @brief Field objectStampSDF, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_objectStampSDF, put=__cordl_internal_set_objectStampSDF)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  objectStampSDF;

/// @brief Field occlusionMask, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_occlusionMask, put=__cordl_internal_set_occlusionMask)) ::UnityW<::UnityEngine::Texture2D>  occlusionMask;

/// @brief Field treeStampOcclusion, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeStampOcclusion, put=__cordl_internal_set_treeStampOcclusion)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  treeStampOcclusion;

/// @brief Field treeStampSDF, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_treeStampSDF, put=__cordl_internal_set_treeStampSDF)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  treeStampSDF;

static inline ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList* New_ctor() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_allObjectSDF() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_allObjectSDF() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_allTreeSDF() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_allTreeSDF() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_curvatureMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_curvatureMap() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_flowMap() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_flowMap() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_objectStampOcclusion() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_objectStampOcclusion() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_objectStampSDF() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_objectStampSDF() ;

constexpr ::UnityW<::UnityEngine::Texture2D> const& __cordl_internal_get_occlusionMask() const;

constexpr ::UnityW<::UnityEngine::Texture2D>& __cordl_internal_get_occlusionMask() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_treeStampOcclusion() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_treeStampOcclusion() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>* const& __cordl_internal_get_treeStampSDF() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*& __cordl_internal_get_treeStampSDF() ;

constexpr void __cordl_internal_set_allObjectSDF(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_allTreeSDF(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_curvatureMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_flowMap(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_objectStampOcclusion(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_objectStampSDF(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_occlusionMask(::UnityW<::UnityEngine::Texture2D>  value) ;

constexpr void __cordl_internal_set_treeStampOcclusion(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

constexpr void __cordl_internal_set_treeStampSDF(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  value) ;

/// @brief Method .ctor, addr 0x181417b90, size 0xd0, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferCaptureTarget_TextureList() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget_TextureList", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferCaptureTarget_TextureList(BufferCaptureTarget_TextureList && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget_TextureList", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferCaptureTarget_TextureList(BufferCaptureTarget_TextureList const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17903};

/// @brief Field curvatureMap, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___curvatureMap;

/// @brief Field flowMap, offset: 0x18, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___flowMap;

/// @brief Field treeStampOcclusion, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___treeStampOcclusion;

/// @brief Field treeStampSDF, offset: 0x28, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___treeStampSDF;

/// @brief Field allTreeSDF, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___allTreeSDF;

/// @brief Field occlusionMask, offset: 0x38, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___occlusionMask;

/// @brief Field objectStampOcclusion, offset: 0x40, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___objectStampOcclusion;

/// @brief Field objectStampSDF, offset: 0x48, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Texture2D>>*  ___objectStampSDF;

/// @brief Field allObjectSDF, offset: 0x50, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Texture2D>  ___allObjectSDF;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___curvatureMap) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___flowMap) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___treeStampOcclusion) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___treeStampSDF) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___allTreeSDF) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___occlusionMask) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___objectStampOcclusion) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___objectStampSDF) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList, ___allObjectSDF) == 0x50, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList) == 0x58, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BufferCaptureTarget/TextureEntry
class CORDL_TYPE BufferCaptureTarget_TextureEntry : public ::System::Object {
public:
// Declarations
/// @brief Field terrainData, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_terrainData, put=__cordl_internal_set_terrainData)) ::UnityW<::UnityEngine::TerrainData>  terrainData;

/// @brief Field textures, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*  textures;

static inline ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry* New_ctor() ;

constexpr ::UnityW<::UnityEngine::TerrainData> const& __cordl_internal_get_terrainData() const;

constexpr ::UnityW<::UnityEngine::TerrainData>& __cordl_internal_get_terrainData() ;

constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList* const& __cordl_internal_get_textures() const;

constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*& __cordl_internal_get_textures() ;

constexpr void __cordl_internal_set_terrainData(::UnityW<::UnityEngine::TerrainData>  value) ;

constexpr void __cordl_internal_set_textures(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*  value) ;

/// @brief Method .ctor, addr 0x181417a90, size 0x100, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferCaptureTarget_TextureEntry() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget_TextureEntry", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferCaptureTarget_TextureEntry(BufferCaptureTarget_TextureEntry && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget_TextureEntry", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferCaptureTarget_TextureEntry(BufferCaptureTarget_TextureEntry const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17904};

/// @brief Field terrainData, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::TerrainData>  ___terrainData;

/// @brief Field textures, offset: 0x18, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList*  ___textures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry, ___terrainData) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry, ___textures) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies JBooth.MicroVerseCore.BufferCaptureTarget::BufferCapture, UnityEngine.ScriptableObject
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.BufferCaptureTarget
class CORDL_TYPE BufferCaptureTarget : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using BufferCapture = ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture;

using TextureEntry = ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry;

using TextureList = ::JBooth::MicroVerseCore::BufferCaptureTarget_TextureList;

/// @brief Field buffers, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_buffers, put=__cordl_internal_set_buffers)) ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  buffers;

/// @brief Field textures, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_textures, put=__cordl_internal_set_textures)) ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*  textures;

/// @brief Method IsOutputFlagSet, addr 0x181405d70, size 0x10, virtual false, abstract: false, final false
inline bool IsOutputFlagSet(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  value) ;

static inline ::JBooth::MicroVerseCore::BufferCaptureTarget* New_ctor() ;

constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture const& __cordl_internal_get_buffers() const;

constexpr ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture& __cordl_internal_get_buffers() ;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>* const& __cordl_internal_get_textures() const;

constexpr ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*& __cordl_internal_get_textures() ;

constexpr void __cordl_internal_set_buffers(::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  value) ;

constexpr void __cordl_internal_set_textures(::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*  value) ;

/// @brief Method .ctor, addr 0x181405d80, size 0x50, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BufferCaptureTarget() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BufferCaptureTarget(BufferCaptureTarget && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BufferCaptureTarget", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BufferCaptureTarget(BufferCaptureTarget const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17905};

/// @brief Field buffers, offset: 0x18, size: 0x4, def value: None
 ::JBooth::MicroVerseCore::BufferCaptureTarget_BufferCapture  ___buffers;

/// @brief Field textures, offset: 0x20, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::JBooth::MicroVerseCore::BufferCaptureTarget_TextureEntry*>*  ___textures;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget, ___buffers) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::BufferCaptureTarget, ___textures) == 0x20, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::BufferCaptureTarget) == 0x28, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
