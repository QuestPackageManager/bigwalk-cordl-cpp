#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/ShaderUtils.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(ShaderUtils)
namespace UnityEngine::Rendering::Universal {
struct ShaderPathID;
}
namespace UnityEngine::Rendering::Universal {
class ShaderUtils___c__DisplayClass2_0;
}
namespace UnityEngine {
class Shader;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class ShaderUtils;
}
namespace UnityEngine::Rendering::Universal {
class ShaderUtils___c__DisplayClass2_0;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::Universal::ShaderUtils*);
MARK_REF_T(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ShaderUtils*, "UnityEngine.Rendering.Universal", "ShaderUtils");
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0*, "UnityEngine.Rendering.Universal", "ShaderUtils/<>c__DisplayClass2_0");
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderUtils/<>c__DisplayClass2_0
class CORDL_TYPE ShaderUtils___c__DisplayClass2_0 : public ::System::Object {
public:
// Declarations
/// @brief Field path, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_path, put=__cordl_internal_set_path)) ::StringW  path;

static inline ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0* New_ctor() ;

/// @brief Method <GetEnumFromPath>b__0, addr 0x182134ec0, size 0x20, virtual false, abstract: false, final false
inline bool _GetEnumFromPath_b__0(::StringW  m) ;

constexpr ::StringW const& __cordl_internal_get_path() const;

constexpr ::StringW& __cordl_internal_get_path() ;

constexpr void __cordl_internal_set_path(::StringW  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderUtils___c__DisplayClass2_0() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtils___c__DisplayClass2_0", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderUtils___c__DisplayClass2_0(ShaderUtils___c__DisplayClass2_0 && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtils___c__DisplayClass2_0", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderUtils___c__DisplayClass2_0(ShaderUtils___c__DisplayClass2_0 const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12587};

/// @brief Field path, offset: 0x10, size: 0x8, def value: None
 ::StringW  ___path;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0, ___path) == 0x10, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0) == 0x18, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.ShaderUtils
class CORDL_TYPE ShaderUtils : public ::System::Object {
public:
// Declarations
using __c__DisplayClass2_0 = ::UnityEngine::Rendering::Universal::ShaderUtils___c__DisplayClass2_0;

/// @brief Field s_ShaderPaths, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_ShaderPaths, put=setStaticF_s_ShaderPaths)) ::ArrayW<::StringW>  s_ShaderPaths;

/// @brief Method GetEnumFromPath, addr 0x1821275d0, size 0x90, virtual false, abstract: false, final false
static inline ::UnityEngine::Rendering::Universal::ShaderPathID GetEnumFromPath(::StringW  path) ;

/// @brief Method GetShaderPath, addr 0x182127660, size 0x110, virtual false, abstract: false, final false
static inline ::StringW GetShaderPath(::UnityEngine::Rendering::Universal::ShaderPathID  id) ;

/// @brief Method IsLWShader, addr 0x182127770, size 0x40, virtual false, abstract: false, final false
static inline bool IsLWShader(::UnityEngine::Shader*  shader) ;

static inline ::ArrayW<::StringW> getStaticF_s_ShaderPaths() ;

/// @brief Method get_PersistentDeltaTime, addr 0x182127910, size 0x10, virtual false, abstract: false, final false
static inline float_t get_PersistentDeltaTime() ;

static inline void setStaticF_s_ShaderPaths(::ArrayW<::StringW>  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr ShaderUtils() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtils", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
ShaderUtils(ShaderUtils && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "ShaderUtils", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
ShaderUtils(ShaderUtils const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{12588};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::Rendering::Universal::ShaderUtils) == 0x10, "Size mismatch!");

} // namespace end def UnityEngine::Rendering::Universal
