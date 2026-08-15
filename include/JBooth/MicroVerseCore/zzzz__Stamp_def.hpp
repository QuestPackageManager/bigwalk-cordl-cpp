#pragma once
// IWYU pragma private; include "JBooth/MicroVerseCore/Stamp.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(Stamp)
namespace JBooth::MicroVerseCore {
class FilterSet;
}
namespace JBooth::MicroVerseCore {
class Stamp_KeywordBuilder;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct Bounds;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class Terrain;
}
// Forward declare root types
namespace JBooth::MicroVerseCore {
class Stamp;
}
namespace JBooth::MicroVerseCore {
class Stamp_KeywordBuilder;
}
// Write type traits
MARK_REF_T(::JBooth::MicroVerseCore::Stamp*);
MARK_REF_T(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Stamp*, "JBooth.MicroVerseCore", "Stamp");
DEFINE_IL2CPP_CLASS(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*, "JBooth.MicroVerseCore", "Stamp/KeywordBuilder");
// Dependencies System.Object
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Stamp/KeywordBuilder
class CORDL_TYPE Stamp_KeywordBuilder : public ::System::Object {
public:
// Declarations
/// @brief Field initialKeywords, offset 0x18, size 0x8 
 __declspec(property(get=__cordl_internal_get_initialKeywords, put=__cordl_internal_set_initialKeywords)) ::System::Collections::Generic::List_1<::StringW>*  initialKeywords;

/// @brief Field keywords, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywords, put=__cordl_internal_set_keywords)) ::System::Collections::Generic::List_1<::StringW>*  keywords;

/// @brief Field kws, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_kws, put=setStaticF_kws)) ::System::Collections::Generic::List_1<::StringW>*  kws;

/// @brief Method Add, addr 0x181442820, size 0x70, virtual false, abstract: false, final false
inline void Add(::StringW  k) ;

/// @brief Method Assign, addr 0x181442890, size 0x100, virtual false, abstract: false, final false
inline void Assign(::UnityEngine::Material*  mat) ;

/// @brief Method Clear, addr 0x180bb1530, size 0x2f70, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method ClearInitial, addr 0x180d95cc0, size 0x7d80, virtual false, abstract: false, final false
inline void ClearInitial() ;

static inline ::JBooth::MicroVerseCore::Stamp_KeywordBuilder* New_ctor() ;

/// @brief Method Remove, addr 0x181442990, size 0x30, virtual false, abstract: false, final false
inline void Remove(::StringW  k) ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_initialKeywords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_initialKeywords() ;

constexpr ::System::Collections::Generic::List_1<::StringW>* const& __cordl_internal_get_keywords() const;

constexpr ::System::Collections::Generic::List_1<::StringW>*& __cordl_internal_get_keywords() ;

constexpr void __cordl_internal_set_initialKeywords(::System::Collections::Generic::List_1<::StringW>*  value) ;

constexpr void __cordl_internal_set_keywords(::System::Collections::Generic::List_1<::StringW>*  value) ;

/// @brief Method .ctor, addr 0x181442a20, size 0x80, virtual false, abstract: false, final false
inline void _ctor() ;

static inline ::System::Collections::Generic::List_1<::StringW>* getStaticF_kws() ;

static inline void setStaticF_kws(::System::Collections::Generic::List_1<::StringW>*  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stamp_KeywordBuilder() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stamp_KeywordBuilder", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stamp_KeywordBuilder(Stamp_KeywordBuilder && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stamp_KeywordBuilder", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stamp_KeywordBuilder(Stamp_KeywordBuilder const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18053};

/// @brief Field keywords, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___keywords;

/// @brief Field initialKeywords, offset: 0x18, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::StringW>*  ___initialKeywords;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Stamp_KeywordBuilder, ___keywords) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Stamp_KeywordBuilder, ___initialKeywords) == 0x18, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Stamp_KeywordBuilder) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
// Dependencies UnityEngine.MonoBehaviour
namespace JBooth::MicroVerseCore {
// Is value type: false
// CS Name: JBooth.MicroVerseCore.Stamp
class CORDL_TYPE Stamp : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using KeywordBuilder = ::JBooth::MicroVerseCore::Stamp_KeywordBuilder;

/// @brief Field keywordBuilder, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_keywordBuilder, put=__cordl_internal_set_keywordBuilder)) ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  keywordBuilder;

/// @brief Field stampVersion, offset 0x28, size 0x4 
 __declspec(property(get=__cordl_internal_get_stampVersion, put=__cordl_internal_set_stampVersion)) int32_t  stampVersion;

/// @brief Field terrainReferenceSize, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_terrainReferenceSize, put=setStaticF_terrainReferenceSize)) float_t  terrainReferenceSize;

/// @brief Method ClearCachedBounds, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void ClearCachedBounds() ;

/// @brief Method GetBounds, addr 0x1814497c0, size 0x30, virtual true, abstract: false, final false
inline ::UnityEngine::Bounds GetBounds() ;

/// @brief Method GetFilterSet, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::JBooth::MicroVerseCore::FilterSet* GetFilterSet() ;

/// @brief Method GetTerrainScalingFactor, addr 0x1814497f0, size 0x90, virtual false, abstract: false, final false
inline float_t GetTerrainScalingFactor(::UnityEngine::Terrain*  t) ;

/// @brief Method IsEnabled, addr 0x181449880, size 0x40, virtual true, abstract: false, final true
inline bool IsEnabled() ;

static inline ::JBooth::MicroVerseCore::Stamp* New_ctor() ;

/// @brief Method OnDestroy, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void OnDestroy() ;

/// @brief Method OnDisable, addr 0x1814498c0, size 0xb0, virtual true, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181449970, size 0xe0, virtual true, abstract: false, final false
inline void OnEnable() ;

/// @brief Method StripInBuild, addr 0x1805feb40, size 0x30, virtual true, abstract: false, final false
inline void StripInBuild() ;

constexpr ::JBooth::MicroVerseCore::Stamp_KeywordBuilder* const& __cordl_internal_get_keywordBuilder() const;

constexpr ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*& __cordl_internal_get_keywordBuilder() ;

constexpr int32_t const& __cordl_internal_get_stampVersion() const;

constexpr int32_t& __cordl_internal_get_stampVersion() ;

constexpr void __cordl_internal_set_keywordBuilder(::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  value) ;

constexpr void __cordl_internal_set_stampVersion(int32_t  value) ;

/// @brief Method .ctor, addr 0x181449a80, size 0xb0, virtual false, abstract: false, final false
inline void _ctor() ;

static inline float_t getStaticF_terrainReferenceSize() ;

static inline void setStaticF_terrainReferenceSize(float_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr Stamp() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "Stamp", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
Stamp(Stamp && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "Stamp", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
Stamp(Stamp const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18054};

/// @brief Field keywordBuilder, offset: 0x20, size: 0x8, def value: None
 ::JBooth::MicroVerseCore::Stamp_KeywordBuilder*  ___keywordBuilder;

/// @brief Field stampVersion, offset: 0x28, size: 0x4, def value: None
 int32_t  ___stampVersion;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroVerseCore::Stamp, ___keywordBuilder) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroVerseCore::Stamp, ___stampVersion) == 0x28, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroVerseCore::Stamp) == 0x30, "Size mismatch!");

} // namespace end def JBooth::MicroVerseCore
