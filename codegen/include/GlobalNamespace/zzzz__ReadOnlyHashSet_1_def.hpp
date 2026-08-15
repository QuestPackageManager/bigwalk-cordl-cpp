#pragma once
// IWYU pragma private; include "GlobalNamespace/ReadOnlyHashSet_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReadOnlyHashSet_1)
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
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
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IEnumerator;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ReadOnlyHashSet_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::GlobalNamespace::ReadOnlyHashSet_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::GlobalNamespace::ReadOnlyHashSet_1, "", "ReadOnlyHashSet`1");
// Dependencies System.Object
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// CS Name: ReadOnlyHashSet`1<T>
class CORDL_TYPE ReadOnlyHashSet_1 : public ::System::Object {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

/// @brief Field _hashSet, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get__hashSet, put=__cordl_internal_set__hashSet)) ::System::Collections::Generic::HashSet_1<T>*  _hashSet;

/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr operator  ::System::Collections::Generic::IEnumerable_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr operator  ::System::Collections::Generic::IReadOnlyCollection_1<T>*() noexcept;

/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr operator  ::System::Collections::IEnumerable*() noexcept;

/// @brief Method Contains, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool Contains(T  item) ;

/// @brief Method GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::Generic::IEnumerator_1<T>* GetEnumerator() ;

static inline ::GlobalNamespace::ReadOnlyHashSet_1<T>* New_ctor(::System::Collections::Generic::HashSet_1<T>*  hashSet) ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline ::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator() ;

constexpr ::System::Collections::Generic::HashSet_1<T>* const& __cordl_internal_get__hashSet() const;

constexpr ::System::Collections::Generic::HashSet_1<T>*& __cordl_internal_get__hashSet() ;

constexpr void __cordl_internal_set__hashSet(::System::Collections::Generic::HashSet_1<T>*  value) ;

/// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline void _ctor(::System::Collections::Generic::HashSet_1<T>*  hashSet) ;

/// @brief Method get_Count, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
inline int32_t get_Count() ;

/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<T>"
constexpr ::System::Collections::Generic::IEnumerable_1<T>* i___System__Collections__Generic__IEnumerable_1_T_() noexcept;

/// @brief Convert to "::System::Collections::Generic::IReadOnlyCollection_1<T>"
constexpr ::System::Collections::Generic::IReadOnlyCollection_1<T>* i___System__Collections__Generic__IReadOnlyCollection_1_T_() noexcept;

/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* i___System__Collections__IEnumerable() noexcept;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ReadOnlyHashSet_1() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHashSet_1", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ReadOnlyHashSet_1(ReadOnlyHashSet_1 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ReadOnlyHashSet_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ReadOnlyHashSet_1(ReadOnlyHashSet_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17508};

/// @brief Field _hashSet, offset: 0x10, size: 0x8, def value: None
 ::System::Collections::Generic::HashSet_1<T>*  ____hashSet;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
