#pragma once
// IWYU pragma private; include "System/Runtime/RuntimeImports.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(RuntimeImports)
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace System::Runtime {
class RuntimeImports;
}
// Write type traits
MARK_REF_T(::System::Runtime::RuntimeImports*);
DEFINE_IL2CPP_CLASS(::System::Runtime::RuntimeImports*, "System.Runtime", "RuntimeImports");
// Dependencies System.Object
namespace System::Runtime {
// Is value type: false
// CS Name: System.Runtime.RuntimeImports
class CORDL_TYPE RuntimeImports : public ::System::Object {
public:
// Declarations
/// @brief Method Memmove, addr 0x18162fbc0, size 0x10, virtual false, abstract: false, final false
static inline void Memmove(uint8_t*  dest, uint8_t*  src, uint32_t  len) ;

/// @brief Method Memmove_wbarrier, addr 0x18162fbd0, size 0x10, virtual false, abstract: false, final false
static inline void Memmove_wbarrier(uint8_t*  dest, uint8_t*  src, uint32_t  len, ::System::IntPtr  type_handle) ;

/// @brief Method RhZeroMemory, addr 0x18162fbe0, size 0x10, virtual false, abstract: false, final false
static inline void RhZeroMemory(::by_ref<uint8_t>  b, uint64_t  byteLength) ;

/// @brief Method ZeroMemory, addr 0x18162fbe0, size 0x10, virtual false, abstract: false, final false
static inline void ZeroMemory(void*  p, uint32_t  byteLength) ;

/// @brief Method _ecvt_s, addr 0x18162fbf0, size 0x10, virtual false, abstract: false, final false
static inline void _ecvt_s(uint8_t*  buffer, int32_t  sizeInBytes, double_t  value, int32_t  count, int32_t*  dec, int32_t*  sign) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr RuntimeImports() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
RuntimeImports(RuntimeImports && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "RuntimeImports", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
RuntimeImports(RuntimeImports const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{836};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::System::Runtime::RuntimeImports) == 0x10, "Size mismatch!");

} // namespace end def System::Runtime
