#pragma once
// IWYU pragma private; include "UnityEngine/Splines/KnotLinkCollection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Splines/zzzz__SplineKnotIndex_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(KnotLinkCollection)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class IReadOnlyList_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::Splines {
class KnotLinkCollection_KnotLink;
}
namespace UnityEngine::Splines {
struct SplineKnotIndex;
}
// Forward declare root types
namespace UnityEngine::Splines {
class KnotLinkCollection;
}
namespace UnityEngine::Splines {
class KnotLinkCollection_KnotLink;
}
// Write type traits
MARK_REF_T(::UnityEngine::Splines::KnotLinkCollection*);
MARK_REF_T(::UnityEngine::Splines::KnotLinkCollection_KnotLink*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::KnotLinkCollection*, "UnityEngine.Splines", "KnotLinkCollection");
DEFINE_IL2CPP_CLASS(::UnityEngine::Splines::KnotLinkCollection_KnotLink*, "UnityEngine.Splines", "KnotLinkCollection/KnotLink");
// Dependencies System.Object, UnityEngine.Splines.SplineKnotIndex
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.KnotLinkCollection/KnotLink
class CORDL_TYPE KnotLinkCollection_KnotLink : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Item)) ::UnityEngine::Splines::SplineKnotIndex  Item[];

/// @brief Field Knots, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_Knots, put=__cordl_internal_set_Knots)) ::ArrayW<::UnityEngine::Splines::SplineKnotIndex>  Knots;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr operator  ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method GetEnumerator, addr 0x180d313d0, size 0x2e950, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<::UnityEngine::Splines::SplineKnotIndex>* GetEnumerator() ;

static inline ::UnityEngine::Splines::KnotLinkCollection_KnotLink* New_ctor() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x182167210, size 0x10, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::ArrayW<::UnityEngine::Splines::SplineKnotIndex> const& __cordl_internal_get_Knots() const;

constexpr ::ArrayW<::UnityEngine::Splines::SplineKnotIndex>& __cordl_internal_get_Knots() ;

constexpr void __cordl_internal_set_Knots(::ArrayW<::UnityEngine::Splines::SplineKnotIndex>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x1809d15e0, size 0x4e0, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Method get_Item, addr 0x180ad85a0, size 0xc6760, virtual true, abstract: false, final true
inline ::UnityEngine::Splines::SplineKnotIndex get_Item(int32_t  index) ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityEngine::Splines::SplineKnotIndex>* i___System__Collections__Generic__IEnumerable_1___UnityEngine__Splines__SplineKnotIndex_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<::UnityEngine::Splines::SplineKnotIndex>* i___System__Collections__Generic__IReadOnlyCollection_1___UnityEngine__Splines__SplineKnotIndex_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>"
constexpr ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>* i___System__Collections__Generic__IReadOnlyList_1___UnityEngine__Splines__SplineKnotIndex_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KnotLinkCollection_KnotLink() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KnotLinkCollection_KnotLink", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KnotLinkCollection_KnotLink(KnotLinkCollection_KnotLink && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnotLinkCollection_KnotLink", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnotLinkCollection_KnotLink(KnotLinkCollection_KnotLink const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18695};

/// @brief Field Knots, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Splines::SplineKnotIndex>  ___Knots;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::KnotLinkCollection_KnotLink, ___Knots) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::KnotLinkCollection_KnotLink) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
// Dependencies System.Object, UnityEngine.Splines.KnotLinkCollection::KnotLink
namespace UnityEngine::Splines {
// Is value type: false
// CS Name: UnityEngine.Splines.KnotLinkCollection
class CORDL_TYPE KnotLinkCollection : public ::System::Object {
public:
// Declarations
using KnotLink = ::UnityEngine::Splines::KnotLinkCollection_KnotLink;

 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field m_KnotsLink, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_m_KnotsLink, put=__cordl_internal_set_m_KnotsLink)) ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>  m_KnotsLink;

/// @brief Method Clear, addr 0x182166790, size 0x30, virtual false, abstract: false, final false
inline void Clear() ;

/// @brief Method GetKnotLinks, addr 0x182166840, size 0x80, virtual false, abstract: false, final false
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>* GetKnotLinks(::UnityEngine::Splines::SplineKnotIndex  knotIndex) ;

/// @brief Method GetKnotLinksInternal, addr 0x1821667c0, size 0x80, virtual false, abstract: false, final false
inline ::UnityEngine::Splines::KnotLinkCollection_KnotLink* GetKnotLinksInternal(::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method KnotIndexChanged, addr 0x1821669a0, size 0x90, virtual false, abstract: false, final false
inline void KnotIndexChanged(::UnityEngine::Splines::SplineKnotIndex  previousIndex, ::UnityEngine::Splines::SplineKnotIndex  newIndex) ;

/// @brief Method KnotIndexChanged, addr 0x1821668c0, size 0xe0, virtual false, abstract: false, final false
inline void KnotIndexChanged(int32_t  splineIndex, int32_t  previousKnotIndex, int32_t  newKnotIndex) ;

/// @brief Method KnotInserted, addr 0x182166a70, size 0x10, virtual false, abstract: false, final false
inline void KnotInserted(::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method KnotInserted, addr 0x182166a30, size 0x40, virtual false, abstract: false, final false
inline void KnotInserted(int32_t  splineIndex, int32_t  knotIndex) ;

/// @brief Method KnotRemoved, addr 0x182166ac0, size 0xa0, virtual false, abstract: false, final false
inline void KnotRemoved(::UnityEngine::Splines::SplineKnotIndex  index) ;

/// @brief Method KnotRemoved, addr 0x182166a80, size 0x40, virtual false, abstract: false, final false
inline void KnotRemoved(int32_t  splineIndex, int32_t  knotIndex) ;

/// @brief Method Link, addr 0x182166b60, size 0x1f0, virtual false, abstract: false, final false
inline void Link(::UnityEngine::Splines::SplineKnotIndex  knotA, ::UnityEngine::Splines::SplineKnotIndex  knotB) ;

static inline ::UnityEngine::Splines::KnotLinkCollection* New_ctor() ;

/// @brief Method ShiftKnotIndices, addr 0x182166d50, size 0x110, virtual false, abstract: false, final false
inline void ShiftKnotIndices(::UnityEngine::Splines::SplineKnotIndex  index, int32_t  offset) ;

/// @brief Method SplineIndexChanged, addr 0x182166e60, size 0x120, virtual false, abstract: false, final false
inline void SplineIndexChanged(int32_t  previousIndex, int32_t  newIndex) ;

/// @brief Method SplineRemoved, addr 0x182166f80, size 0x1d0, virtual false, abstract: false, final false
inline void SplineRemoved(int32_t  splineIndex) ;

/// @brief Method TryGetKnotLinks, addr 0x182167150, size 0x30, virtual false, abstract: false, final false
inline bool TryGetKnotLinks(::UnityEngine::Splines::SplineKnotIndex  knotIndex, ::by_ref<::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Splines::SplineKnotIndex>*>  linkedKnots) ;

/// @brief Method Unlink, addr 0x182167180, size 0x90, virtual false, abstract: false, final false
inline void Unlink(::UnityEngine::Splines::SplineKnotIndex  knot) ;

constexpr ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*> const& __cordl_internal_get_m_KnotsLink() const;

constexpr ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>& __cordl_internal_get_m_KnotsLink() ;

constexpr void __cordl_internal_set_m_KnotsLink(::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>  value) ;

/// @brief Method .ctor, addr 0x182166790, size 0x30, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method get_Count, addr 0x1809d15e0, size 0x4e0, virtual false, abstract: false, final false
inline int32_t get_Count() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr KnotLinkCollection() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "KnotLinkCollection", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
KnotLinkCollection(KnotLinkCollection && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "KnotLinkCollection", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
KnotLinkCollection(KnotLinkCollection const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18696};

/// @brief Field m_KnotsLink, offset: 0x10, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Splines::KnotLinkCollection_KnotLink*>  ___m_KnotsLink;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Splines::KnotLinkCollection, ___m_KnotsLink) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Splines::KnotLinkCollection) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Splines
