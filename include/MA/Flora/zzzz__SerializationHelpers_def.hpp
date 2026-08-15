#pragma once
// IWYU pragma private; include "MA/Flora/SerializationHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializationHelpers)
namespace MA::Flora {
struct CompressedTransform;
}
namespace MA::Flora {
struct FloraInstanceTransform;
}
namespace MA::Flora {
struct SerializationHelpers_ReadCompressedTransformsJob;
}
namespace MA::Flora {
struct SerializationHelpers_WriteCompressedTransformsJob;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace Unity::Collections {
template<typename T>
struct NativeList_1;
}
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace MA::Flora {
class SerializationHelpers;
}
namespace MA::Flora {
struct SerializationHelpers_ReadCompressedTransformsJob;
}
namespace MA::Flora {
struct SerializationHelpers_WriteCompressedTransformsJob;
}
// Write type traits
MARK_REF_T(::MA::Flora::SerializationHelpers*);
MARK_VAL_T(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob);
MARK_VAL_T(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::SerializationHelpers*, "MA.Flora", "SerializationHelpers");
DEFINE_IL2CPP_CLASS(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob, "MA.Flora", "SerializationHelpers/ReadCompressedTransformsJob");
DEFINE_IL2CPP_CLASS(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob, "MA.Flora", "SerializationHelpers/WriteCompressedTransformsJob");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SerializationHelpers/WriteCompressedTransformsJob
struct CORDL_TYPE SerializationHelpers_WriteCompressedTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1815133d0, size 0x150, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializationHelpers_WriteCompressedTransformsJob() ;

// Ctor Parameters [CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Src", ty: "::MA::Flora::FloraInstanceTransform*", modifiers: "", def_value: None }, CppParam { name: "Dst", ty: "::MA::Flora::CompressedTransform*", modifiers: "", def_value: None }]
constexpr SerializationHelpers_WriteCompressedTransformsJob(int32_t  Length, ::MA::Flora::FloraInstanceTransform*  Src, ::MA::Flora::CompressedTransform*  Dst) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13406};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Length, offset: 0x0, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field Src, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::FloraInstanceTransform*  Src;

/// @brief Field Dst, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::CompressedTransform*  Dst;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob, Length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob, Src) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob, Dst) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.SerializationHelpers/ReadCompressedTransformsJob
struct CORDL_TYPE SerializationHelpers_ReadCompressedTransformsJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x18150ccc0, size 0x160, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr SerializationHelpers_ReadCompressedTransformsJob() ;

// Ctor Parameters [CppParam { name: "Length", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "Src", ty: "::MA::Flora::CompressedTransform*", modifiers: "", def_value: None }, CppParam { name: "Dst", ty: "::MA::Flora::FloraInstanceTransform*", modifiers: "", def_value: None }]
constexpr SerializationHelpers_ReadCompressedTransformsJob(int32_t  Length, ::MA::Flora::CompressedTransform*  Src, ::MA::Flora::FloraInstanceTransform*  Dst) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13407};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x18};

/// @brief Field Length, offset: 0x0, size: 0x4, def value: None
 int32_t  Length;

/// @brief Field Src, offset: 0x8, size: 0x8, def value: None
 ::MA::Flora::CompressedTransform*  Src;

/// @brief Field Dst, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::FloraInstanceTransform*  Dst;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob, Length) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob, Src) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob, Dst) == 0x10, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob) == 0x18, "Size mismatch!");

} // namespace end def MA::Flora
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.SerializationHelpers
class CORDL_TYPE SerializationHelpers : public ::System::Object {
public:
// Declarations
using ReadCompressedTransformsJob = ::MA::Flora::SerializationHelpers_ReadCompressedTransformsJob;

using WriteCompressedTransformsJob = ::MA::Flora::SerializationHelpers_WriteCompressedTransformsJob;

/// @brief Method DeserializeByteArrayToTransforms, addr 0x18150d1d0, size 0x170, virtual false, abstract: false, final false
static inline void DeserializeByteArrayToTransforms(::by_ref<::ArrayW<uint8_t>>  compressedBytes, int32_t  serializedCount, ::Unity::Collections::NativeList_1<::MA::Flora::FloraInstanceTransform>  transforms) ;

/// @brief Method SerializeTransformsToByteArray, addr 0x18150d340, size 0xe0, virtual false, abstract: false, final false
static inline int32_t SerializeTransformsToByteArray(::Unity::Collections::NativeArray_1<::MA::Flora::FloraInstanceTransform>  transforms, ::by_ref<::ArrayW<uint8_t>>  compressedBytes) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr SerializationHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
SerializationHelpers(SerializationHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "SerializationHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
SerializationHelpers(SerializationHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13408};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::SerializationHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
