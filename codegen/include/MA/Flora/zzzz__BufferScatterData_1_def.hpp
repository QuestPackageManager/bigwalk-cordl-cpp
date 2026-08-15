#pragma once
// IWYU pragma private; include "MA/Flora/BufferScatterData_1.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__PackedChunkUploadHeader_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(BufferScatterData_1)
// Forward declare root types
namespace MA::Flora {
template<typename T>
struct BufferScatterData_1;
}
// Write type traits
MARK_GEN_VAL_T(::MA::Flora::BufferScatterData_1);
DEFINE_IL2CPP_GEN_CLASS(::MA::Flora::BufferScatterData_1, "MA.Flora", "BufferScatterData`1");
// Dependencies MA.Flora.PackedChunkUploadHeader, Unity.Collections.NativeArray`1<T>
namespace MA::Flora {
// cpp template
template<typename T>
// Is value type: true
// CS Name: MA.Flora.BufferScatterData`1<T>
struct CORDL_TYPE BufferScatterData_1 {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Method get_IsCreated, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

// Ctor Parameters []
// @brief default ctor
constexpr BufferScatterData_1() ;

// Ctor Parameters [CppParam { name: "ChunkHeaders", ty: "::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>", modifiers: "", def_value: None }, CppParam { name: "InstanceValues", ty: "::Unity::Collections::NativeArray_1<T>", modifiers: "", def_value: None }]
constexpr BufferScatterData_1(::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkHeaders, ::Unity::Collections::NativeArray_1<T>  InstanceValues) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12920};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x20};

/// @brief Field ChunkHeaders, offset: 0x0, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<::MA::Flora::PackedChunkUploadHeader>  ChunkHeaders;

/// @brief Field InstanceValues, offset: 0x10, size: 0x10, def value: None
 ::Unity::Collections::NativeArray_1<T>  InstanceValues;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def MA::Flora
