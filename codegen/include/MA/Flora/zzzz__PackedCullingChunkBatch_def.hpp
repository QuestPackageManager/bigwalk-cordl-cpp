#pragma once
// IWYU pragma private; include "MA/Flora/PackedCullingChunkBatch.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/stringw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(PackedCullingChunkBatch)
namespace System {
template<typename T>
class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace MA::Flora {
struct PackedCullingChunkBatch;
}
// Write type traits
MARK_VAL_T(::MA::Flora::PackedCullingChunkBatch);
DEFINE_IL2CPP_CLASS(::MA::Flora::PackedCullingChunkBatch, "MA.Flora", "PackedCullingChunkBatch");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.PackedCullingChunkBatch
struct CORDL_TYPE PackedCullingChunkBatch {
public:
// Declarations
/// @brief Convert operator to "::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>"
constexpr operator  ::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>*() ;

/// @brief Method Compressed, addr 0x1814c0730, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::PackedCullingChunkBatch Compressed(uint32_t  instanceOffsetStart) ;

/// @brief Method Equals, addr 0x1814c0740, size 0x70, virtual true, abstract: false, final false
inline bool Equals(::System::Object*  obj) ;

/// @brief Method Equals, addr 0x1805a82e0, size 0x20, virtual true, abstract: false, final true
inline bool Equals(::MA::Flora::PackedCullingChunkBatch  other) ;

/// @brief Method GetHashCode, addr 0x1803474c0, size 0x10, virtual true, abstract: false, final false
inline int32_t GetHashCode() ;

/// @brief Method Indirect, addr 0x1814c07b0, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::PackedCullingChunkBatch Indirect(uint32_t  indirectOffset, int32_t  indirectCount) ;

/// @brief Method ToString, addr 0x1814c07c0, size 0xd0, virtual true, abstract: false, final false
inline ::StringW ToString() ;

/// @brief Method get_None, addr 0x1802dd520, size 0x10, virtual false, abstract: false, final false
static inline ::MA::Flora::PackedCullingChunkBatch get_None() ;

/// @brief Convert to "::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>"
constexpr ::System::IEquatable_1<::MA::Flora::PackedCullingChunkBatch>* i___System__IEquatable_1___MA__Flora__PackedCullingChunkBatch_() ;

// Ctor Parameters []
// @brief default ctor
constexpr PackedCullingChunkBatch() ;

// Ctor Parameters [CppParam { name: "data", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr PackedCullingChunkBatch(uint32_t  data) noexcept;

/// @brief Field BatchCompressedFlag offset 0xffffffff size 0x4
static constexpr uint32_t  BatchCompressedFlag{static_cast<uint32_t>(0x80000000u)};

/// @brief Field BatchMaxInstances offset 0xffffffff size 0x4
static constexpr int32_t  BatchMaxInstances{static_cast<int32_t>(0x40)};

/// @brief Field IndirectOffsetBits offset 0xffffffff size 0x4
static constexpr int32_t  IndirectOffsetBits{static_cast<int32_t>(0x18)};

/// @brief Field IndirectOffsetMask offset 0xffffffff size 0x4
static constexpr uint32_t  IndirectOffsetMask{static_cast<uint32_t>(0xffffffu)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13110};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x4};

/// @brief Field data, offset: 0x0, size: 0x4, def value: None
 uint32_t  data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::PackedCullingChunkBatch, data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::PackedCullingChunkBatch) == 0x4, "Size mismatch!");

} // namespace end def MA::Flora
