#pragma once
// IWYU pragma private; include "MA/Flora/NativeDisposeBufferArrayJob.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "MA/Flora/zzzz__NativeBufferArrayDispose_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(NativeDisposeBufferArrayJob)
namespace Unity::Jobs {
class IJob;
}
// Forward declare root types
namespace MA::Flora {
struct NativeDisposeBufferArrayJob;
}
// Write type traits
MARK_VAL_T(::MA::Flora::NativeDisposeBufferArrayJob);
DEFINE_IL2CPP_CLASS(::MA::Flora::NativeDisposeBufferArrayJob, "MA.Flora", "NativeDisposeBufferArrayJob");
// Dependencies MA.Flora.NativeBufferArrayDispose
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.NativeDisposeBufferArrayJob
struct CORDL_TYPE NativeDisposeBufferArrayJob {
public:
// Declarations
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr operator  ::Unity::Jobs::IJob*() ;

/// @brief Method Execute, addr 0x1814607d0, size 0xa0, virtual true, abstract: false, final true
inline void Execute() ;

/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* i___Unity__Jobs__IJob() ;

// Ctor Parameters []
// @brief default ctor
constexpr NativeDisposeBufferArrayJob() ;

// Ctor Parameters [CppParam { name: "Data", ty: "::MA::Flora::NativeBufferArrayDispose", modifiers: "", def_value: None }]
constexpr NativeDisposeBufferArrayJob(::MA::Flora::NativeBufferArrayDispose  Data) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12878};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x10};

/// @brief Field Data, offset: 0x0, size: 0x10, def value: None
 ::MA::Flora::NativeBufferArrayDispose  Data;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::NativeDisposeBufferArrayJob, Data) == 0x0, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::NativeDisposeBufferArrayJob) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
