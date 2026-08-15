#pragma once
// IWYU pragma private; include "MA/Flora/ConstantBufferRefHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantBufferRefHelpers)
namespace MA::Flora {
template<typename T>
struct ConstantBufferRef_1;
}
namespace UnityEngine::Rendering {
class CommandBuffer;
}
namespace UnityEngine {
class ComputeShader;
}
namespace UnityEngine {
class MaterialPropertyBlock;
}
namespace UnityEngine {
class Material;
}
// Forward declare root types
namespace MA::Flora {
class ConstantBufferRefHelpers;
}
// Write type traits
MARK_REF_T(::MA::Flora::ConstantBufferRefHelpers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ConstantBufferRefHelpers*, "MA.Flora", "ConstantBufferRefHelpers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ConstantBufferRefHelpers
class CORDL_TYPE ConstantBufferRefHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method SetComputeConstantBufferParam, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetComputeConstantBufferParam(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method SetConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetConstantBuffer(::UnityEngine::Material*  mat, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method SetConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetConstantBuffer(::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetGlobalConstantBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, ::MA::Flora::ConstantBufferRef_1<T>  constantBuffer) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantBufferRefHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantBufferRefHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantBufferRefHelpers(ConstantBufferRefHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantBufferRefHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantBufferRefHelpers(ConstantBufferRefHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13325};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ConstantBufferRefHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
