#pragma once
// IWYU pragma private; include "WaveHarmonic/Crest/LightProbeUtility.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LightProbeUtility)
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace WaveHarmonic::Crest {
class LightProbeUtility;
}
// Write type traits
MARK_REF_T(::WaveHarmonic::Crest::LightProbeUtility*);
DEFINE_IL2CPP_CLASS(::WaveHarmonic::Crest::LightProbeUtility*, "WaveHarmonic.Crest", "LightProbeUtility");
// Dependencies System.Object
namespace WaveHarmonic::Crest {
// Is value type: false
// CS Name: WaveHarmonic.Crest.LightProbeUtility
class CORDL_TYPE LightProbeUtility : public ::System::Object {
public:
// Declarations
/// @brief Field s_SHA, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SHA, put=setStaticF_s_SHA)) ::ArrayW<int32_t>  s_SHA;

/// @brief Field s_SHB, offset 0xffffffff, size 0x8 
 __declspec(property(get=getStaticF_s_SHB, put=setStaticF_s_SHB)) ::ArrayW<int32_t>  s_SHB;

/// @brief Field s_SHC, offset 0xffffffff, size 0x4 
 __declspec(property(get=getStaticF_s_SHC, put=setStaticF_s_SHC)) int32_t  s_SHC;

/// @brief Method SetSHCoefficients, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
template<typename T>
static inline void SetSHCoefficients(T  properties, ::UnityEngine::Vector3  position) ;

static inline ::ArrayW<int32_t> getStaticF_s_SHA() ;

static inline ::ArrayW<int32_t> getStaticF_s_SHB() ;

static inline int32_t getStaticF_s_SHC() ;

static inline void setStaticF_s_SHA(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_SHB(::ArrayW<int32_t>  value) ;

static inline void setStaticF_s_SHC(int32_t  value) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr LightProbeUtility() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "LightProbeUtility", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
LightProbeUtility(LightProbeUtility && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "LightProbeUtility", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
LightProbeUtility(LightProbeUtility const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20134};

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::WaveHarmonic::Crest::LightProbeUtility) == 0x10, "Size mismatch!");

} // namespace end def WaveHarmonic::Crest
