#pragma once
// IWYU pragma private; include "MA/Flora/NativeBufferArrayDispose.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeBufferArrayDispose)
namespace MA::Flora {
struct NativeBufferArrayMetadata;
}
// Forward declare root types
namespace MA::Flora {
struct NativeBufferArrayDispose;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeBufferArrayDispose);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeBufferArrayDispose, "MA.Flora", "NativeBufferArrayDispose");
// Dependencies Unity.Collections.AllocatorManager::AllocatorHandle
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeBufferArrayDispose
struct CORDL_TYPE NativeBufferArrayDispose {
public:
// Declarations
/// @brief Method Dispose, addr 0x181460440, size 0xe0, virtual false, abstract: false, final false
inline void Dispose() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeBufferArrayDispose() ;

// Ctor Parameters [CppParam { name: "m_BufferArrayData", ty: "::MA::Flora::NativeBufferArrayMetadata*", modifiers: "", def_value: None }, CppParam { name: "m_AllocatorLabel", ty: "::Unity::Collections::AllocatorManager_AllocatorHandle", modifiers: "", def_value: None }]
constexpr NativeBufferArrayDispose(::MA::Flora::NativeBufferArrayMetadata*  m_BufferArrayData, ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12877};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field m_BufferArrayData, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::NativeBufferArrayMetadata*  m_BufferArrayData;

/// @brief Field m_AllocatorLabel, offset: 0x8, size: 0x4, def value: None
 ::Unity::Collections::AllocatorManager_AllocatorHandle  m_AllocatorLabel;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeBufferArrayDispose, m_BufferArrayData) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::NativeBufferArrayDispose, m_AllocatorLabel) == 0x8, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeBufferArrayDispose) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
