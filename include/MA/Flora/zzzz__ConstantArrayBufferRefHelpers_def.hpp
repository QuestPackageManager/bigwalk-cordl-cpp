#pragma once
// IWYU pragma private; include "MA/Flora/ConstantArrayBufferRefHelpers.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ConstantArrayBufferRefHelpers)
namespace MA::Flora {
template<typename T>
struct ConstantBufferArrayRef_1;
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
class ConstantArrayBufferRefHelpers;
}
// Write type traits
MARK_REF_T(::MA::Flora::ConstantArrayBufferRefHelpers*);
DEFINE_IL2CPP_CLASS(::MA::Flora::ConstantArrayBufferRefHelpers*, "MA.Flora", "ConstantArrayBufferRefHelpers");
// Dependencies System.Object
namespace MA::Flora {
// Is value type: false
// CS Name: MA.Flora.ConstantArrayBufferRefHelpers
class CORDL_TYPE ConstantArrayBufferRefHelpers : public ::System::Object {
public:
// Declarations
/// @brief Method SetComputeConstantBufferParam, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetComputeConstantBufferParam(::UnityEngine::Rendering::CommandBuffer*  cmd, ::UnityEngine::ComputeShader*  computeShader, int32_t  nameID, ::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer, int32_t  index) ;

/// @brief Method SetConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetConstantBuffer(::UnityEngine::Material*  mat, int32_t  nameID, ::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer, int32_t  index) ;

/// @brief Method SetConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetConstantBuffer(::UnityEngine::MaterialPropertyBlock*  mpb, int32_t  nameID, ::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer, int32_t  index) ;

/// @brief Method SetGlobalConstantBuffer, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetGlobalConstantBuffer(::UnityEngine::Rendering::CommandBuffer*  cmd, int32_t  nameID, ::MA::Flora::ConstantBufferArrayRef_1<T>  constantBuffer, int32_t  index) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ConstantArrayBufferRefHelpers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ConstantArrayBufferRefHelpers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ConstantArrayBufferRefHelpers(ConstantArrayBufferRefHelpers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ConstantArrayBufferRefHelpers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ConstantArrayBufferRefHelpers(ConstantArrayBufferRefHelpers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{13323};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::MA::Flora::ConstantArrayBufferRefHelpers) == 0x10, "Size mismatch!");

} // namespace end def MA::Flora
