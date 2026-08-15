#pragma once
// IWYU pragma private; include "HandyCollections/Heap/IMinHeap_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstdint>
CORDL_MODULE_EXPORT(IMinHeap_1)
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace HandyCollections::Heap {
template<typename T>
class IMinHeap_1;
}
// Write type traits
MARK_GEN_REF_T_PTR(::HandyCollections::Heap::IMinHeap_1);
DEFINE_IL2CPP_GEN_CLASS_PTR(::HandyCollections::Heap::IMinHeap_1, "HandyCollections.Heap", "IMinHeap`1");
// Dependencies 
namespace HandyCollections::Heap {
// cpp template
template<typename T>
// Is value type: false
// CS Name: HandyCollections.Heap.IMinHeap`1<T>
class CORDL_TYPE IMinHeap_1 {
public:
// Declarations
 __declspec(property(get=get_Count)) int32_t  Count;

 __declspec(property(get=get_Minimum)) T  Minimum;

/// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Add(T  item) ;

/// @brief Method Add, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Add(::System::Collections::Generic::IEnumerable_1<T>*  items) ;

/// @brief Method Clear, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline void Clear() ;

/// @brief Method IndexOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IndexOf(T  item) ;

/// @brief Method IndexOf, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t IndexOf(::System::Predicate_1<T>*  predicate) ;

/// @brief Method RemoveAt, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T RemoveAt(int32_t  index) ;

/// @brief Method RemoveMin, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T RemoveMin() ;

/// @brief Method get_Count, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline int32_t get_Count() ;

/// @brief Method get_Minimum, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
inline T get_Minimum() ;

// Ctor Parameters [CppParam { name: "", ty: "IMinHeap_1", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
IMinHeap_1(IMinHeap_1 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{16774};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HandyCollections::Heap
