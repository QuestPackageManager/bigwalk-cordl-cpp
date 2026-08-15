#pragma once
// IWYU pragma private; include "MA/InternalBridge/CollectionsBridge.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(CollectionsBridge)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
// Forward declare root types
namespace MA::InternalBridge {
class CollectionsBridge;
}
// Write type traits
MARK_REF_T(::MA::InternalBridge::CollectionsBridge*);
DEFINE_IL2CPP_CLASS(::MA::InternalBridge::CollectionsBridge*, "MA.InternalBridge", "CollectionsBridge");
// Dependencies System.Object
namespace MA::InternalBridge {
// Is value type: false
// CS Name: MA.InternalBridge.CollectionsBridge
class CORDL_TYPE CollectionsBridge : public ::System::Object {
public:
// Declarations
/// @brief Method GetAllocatorLabel, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline ::Unity::Collections::Allocator GetAllocatorLabel(::by_ref<::Unity::Collections::NativeArray_1<T>>  array) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr CollectionsBridge() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "CollectionsBridge", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
CollectionsBridge(CollectionsBridge && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "CollectionsBridge", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
CollectionsBridge(CollectionsBridge const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{21113};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::InternalBridge::CollectionsBridge) == 0x10, "Size mismatch!");

} // namespace end def MA::InternalBridge
