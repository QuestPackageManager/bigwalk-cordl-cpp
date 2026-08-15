#pragma once
// IWYU pragma private; include "Mirror/DeltaCompression.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DeltaCompression)
namespace Mirror {
class NetworkReader;
}
namespace Mirror {
class NetworkWriter;
}
namespace Mirror {
struct Vector3Long;
}
// Forward declare root types
namespace Mirror {
class DeltaCompression;
}
// Write type traits
MARK_REF_T(::Mirror::DeltaCompression*);
DEFINE_IL2CPP_CLASS(::Mirror::DeltaCompression*, "Mirror", "DeltaCompression");
// Dependencies System.Object
namespace Mirror {
// Is value type: false
// CS Name: Mirror.DeltaCompression
class CORDL_TYPE DeltaCompression : public ::System::Object {
public:
// Declarations
/// @brief Method Compress, addr 0x181590910, size 0x90, virtual false, abstract: false, final false
static inline void Compress(::Mirror::NetworkWriter*  writer, ::Mirror::Vector3Long  last, ::Mirror::Vector3Long  current) ;

/// @brief Method Compress, addr 0x1815909a0, size 0x20, virtual false, abstract: false, final false
static inline void Compress(::Mirror::NetworkWriter*  writer, int64_t  last, int64_t  current) ;

/// @brief Method Decompress, addr 0x1815909f0, size 0xb0, virtual false, abstract: false, final false
static inline ::Mirror::Vector3Long Decompress(::Mirror::NetworkReader*  reader, ::Mirror::Vector3Long  last) ;

/// @brief Method Decompress, addr 0x1815909c0, size 0x30, virtual false, abstract: false, final false
static inline int64_t Decompress(::Mirror::NetworkReader*  reader, int64_t  last) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr DeltaCompression() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "DeltaCompression", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
DeltaCompression(DeltaCompression && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "DeltaCompression", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
DeltaCompression(DeltaCompression const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{18377};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Mirror::DeltaCompression) == 0x10, "Size mismatch!");

} // namespace end def Mirror
