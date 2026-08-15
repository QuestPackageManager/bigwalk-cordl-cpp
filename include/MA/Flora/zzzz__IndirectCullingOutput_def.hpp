#pragma once
// IWYU pragma private; include "MA/Flora/IndirectCullingOutput.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IndirectCullingOutput)
namespace MA::Flora {
struct IndirectDrawBin;
}
namespace MA::Flora {
struct IndirectDrawChunk;
}
namespace MA::Flora {
struct IndirectDrawCommandInfo;
}
namespace MA::Flora {
struct IndirectDrawInfo;
}
namespace MA::Flora {
struct IndirectDrawTemplate;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace MA::Flora {
struct IndirectCullingOutput;
}
// Write type traits
MARK_VAL_T(::MA::Flora::IndirectCullingOutput);
DEFINE_IL2CPP_CLASS(::MA::Flora::IndirectCullingOutput, "MA.Flora", "IndirectCullingOutput");
// Dependencies 
namespace MA::Flora {
// Is value type: true
// CS Name: MA.Flora.IndirectCullingOutput
struct CORDL_TYPE IndirectCullingOutput {
public:
// Declarations
 __declspec(property(get=get_IsCreated)) bool  IsCreated;

/// @brief Convert operator to "::System::IDisposable"
constexpr operator  ::System::IDisposable*() ;

/// @brief Method Dispose, addr 0x1814bfdb0, size 0x70, virtual true, abstract: false, final true
inline void Dispose() ;

/// @brief Method get_IsCreated, addr 0x181458e50, size 0x20, virtual false, abstract: false, final false
inline bool get_IsCreated() ;

/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* i___System__IDisposable() ;

// Ctor Parameters []
// @brief default ctor
constexpr IndirectCullingOutput() ;

// Ctor Parameters [CppParam { name: "DrawChunks", ty: "::MA::Flora::IndirectDrawChunk*", modifiers: "", def_value: None }, CppParam { name: "DrawChunkCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawTemplates", ty: "::MA::Flora::IndirectDrawTemplate*", modifiers: "", def_value: None }, CppParam { name: "DrawTemplateCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawBins", ty: "::MA::Flora::IndirectDrawBin*", modifiers: "", def_value: None }, CppParam { name: "DrawBinCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "DrawInfos", ty: "::MA::Flora::IndirectDrawInfo*", modifiers: "", def_value: None }, CppParam { name: "DrawCommandInfos", ty: "::MA::Flora::IndirectDrawCommandInfo*", modifiers: "", def_value: None }, CppParam { name: "DrawCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "VisibilityBufferCapacity", ty: "int32_t", modifiers: "", def_value: None }]
constexpr IndirectCullingOutput(::MA::Flora::IndirectDrawChunk*  DrawChunks, int32_t  DrawChunkCount, ::MA::Flora::IndirectDrawTemplate*  DrawTemplates, int32_t  DrawTemplateCount, ::MA::Flora::IndirectDrawBin*  DrawBins, int32_t  DrawBinCount, ::MA::Flora::IndirectDrawInfo*  DrawInfos, ::MA::Flora::IndirectDrawCommandInfo*  DrawCommandInfos, int32_t  DrawCount, int32_t  VisibilityBufferCapacity) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13165};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x48};

/// @brief Field DrawChunks, offset: 0x0, size: 0x8, def value: None
 ::MA::Flora::IndirectDrawChunk*  DrawChunks;

/// @brief Field DrawChunkCount, offset: 0x8, size: 0x4, def value: None
 int32_t  DrawChunkCount;

/// @brief Field DrawTemplates, offset: 0x10, size: 0x8, def value: None
 ::MA::Flora::IndirectDrawTemplate*  DrawTemplates;

/// @brief Field DrawTemplateCount, offset: 0x18, size: 0x4, def value: None
 int32_t  DrawTemplateCount;

/// @brief Field DrawBins, offset: 0x20, size: 0x8, def value: None
 ::MA::Flora::IndirectDrawBin*  DrawBins;

/// @brief Field DrawBinCount, offset: 0x28, size: 0x4, def value: None
 int32_t  DrawBinCount;

/// @brief Field DrawInfos, offset: 0x30, size: 0x8, def value: None
 ::MA::Flora::IndirectDrawInfo*  DrawInfos;

/// @brief Field DrawCommandInfos, offset: 0x38, size: 0x8, def value: None
 ::MA::Flora::IndirectDrawCommandInfo*  DrawCommandInfos;

/// @brief Field DrawCount, offset: 0x40, size: 0x4, def value: None
 int32_t  DrawCount;

/// @brief Field VisibilityBufferCapacity, offset: 0x44, size: 0x4, def value: None
 int32_t  VisibilityBufferCapacity;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawChunks) == 0x0, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawChunkCount) == 0x8, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawTemplates) == 0x10, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawTemplateCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawBins) == 0x20, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawBinCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawInfos) == 0x30, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawCommandInfos) == 0x38, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, DrawCount) == 0x40, "Offset mismatch!");

static_assert(offsetof(::MA::Flora::IndirectCullingOutput, VisibilityBufferCapacity) == 0x44, "Offset mismatch!");

static_assert(sizeof(::MA::Flora::IndirectCullingOutput) == 0x48, "Size mismatch!");

} // namespace end def MA::Flora
