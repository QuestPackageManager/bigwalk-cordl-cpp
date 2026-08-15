#pragma once
// IWYU pragma private; include "MA/Flora/MemoryUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MemoryUtility)
namespace Unity::Collections {
struct Allocator;
}
namespace Unity::Collections {
struct NativeArrayOptions;
}
// Forward declare root types
namespace MA::Flora {
class MemoryUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::MemoryUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::MemoryUtility*, "MA.Flora", "MemoryUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.MemoryUtility
class CORDL_TYPE MemoryUtility : public ::System::Object {
public:
// Declarations
/// @brief Method Allocate, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline T* Allocate(int32_t  count, ::Unity::Collections::Allocator  allocator, ::Unity::Collections::NativeArrayOptions  options) ;

/// @brief Method Free, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void Free(T*  ptr, ::Unity::Collections::Allocator  allocator) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MemoryUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MemoryUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MemoryUtility(MemoryUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MemoryUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MemoryUtility(MemoryUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13401};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::MemoryUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
