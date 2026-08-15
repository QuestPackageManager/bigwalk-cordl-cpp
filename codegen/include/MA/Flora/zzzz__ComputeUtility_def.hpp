#pragma once
// IWYU pragma private; include "MA/Flora/ComputeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ComputeUtility)
namespace Unity::Mathematics {
struct int3;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine::Rendering {
class ComputeCommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
// Forward declare root types
namespace MA::Flora {
class ComputeUtility;
}
// Write type traits
MARK_REF_T(::MA::Flora::ComputeUtility*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ComputeUtility*, "MA.Flora", "ComputeUtility");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ComputeUtility
class CORDL_TYPE ComputeUtility : public ::System::Object {
public:
// Declarations
/// @brief Method Dispatch, addr 0x1814f7740, size 0x40, virtual false, abstract: false, final false
static inline void Dispatch(::UnityEngine::ComputeShader*  cs, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups) ;

/// @brief Method DispatchCompute, addr 0x1814f76c0, size 0x40, virtual false, abstract: false, final false
static inline void DispatchCompute(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups) ;

/// @brief Method DispatchCompute, addr 0x1814f7700, size 0x40, virtual false, abstract: false, final false
static inline void DispatchCompute(::UnityEngine::Rendering::ComputeCommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  kernelIndex, ::Unity::Mathematics::int3  threadGroups) ;

/// @brief Method UnwrapLinearDispatchThreadID, addr 0x1814f7780, size 0x40, virtual false, abstract: false, final false
static inline int32_t UnwrapLinearDispatchThreadID(::Unity::Mathematics::int3  wrappedGroupID, int32_t  groupThreadIndex, int32_t  threadGroupSize) ;

/// @brief Method UnwrapLinearGroupID, addr 0x1814f77c0, size 0x10, virtual false, abstract: false, final false
static inline int32_t UnwrapLinearGroupID(::Unity::Mathematics::int3  wrappedGroupID) ;

/// @brief Method WrapDispatchCount, addr 0x1814f77d0, size 0xb0, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 WrapDispatchCount(int32_t  dispatchThreadCount, int32_t  groupSize) ;

/// @brief Method WrapGroupCount, addr 0x1814f7880, size 0x90, virtual false, abstract: false, final false
static inline ::Unity::Mathematics::int3 WrapGroupCount(int32_t  targetGroupCount) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ComputeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ComputeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ComputeUtility(ComputeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ComputeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ComputeUtility(ComputeUtility const& ) = delete;

/// @brief Field WrappedGroupStride offset 0xffffffff size 0x4
static constexpr int32_t  WrappedGroupStride{static_cast<int32_t>(0x80)};

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13321};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ComputeUtility) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
