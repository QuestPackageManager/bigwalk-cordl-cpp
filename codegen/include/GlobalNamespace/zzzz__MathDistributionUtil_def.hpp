#pragma once
// IWYU pragma private; include "GlobalNamespace/MathDistributionUtil.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MathDistributionUtil)
namespace GlobalNamespace {
struct MathDistributionUtil_Seed;
}
// Forward declare root types
namespace GlobalNamespace {
class MathDistributionUtil;
}
namespace GlobalNamespace {
struct MathDistributionUtil_Seed;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::MathDistributionUtil*);
MARK_VAL_T(::GlobalNamespace::MathDistributionUtil_Seed);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MathDistributionUtil*, "", "MathDistributionUtil");
DEFINE_IL2CPP_CLASS(::GlobalNamespace::MathDistributionUtil_Seed, "", "MathDistributionUtil/Seed");
// Dependencies 
namespace GlobalNamespace {
// Is value type: true
// CS Name: MathDistributionUtil/Seed
struct CORDL_TYPE MathDistributionUtil_Seed {
public:
// Declarations
/// @brief Method .ctor, addr 0x1804a47e0, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint32_t  u, uint32_t  v) ;

// Ctor Parameters []
// @brief default ctor
constexpr MathDistributionUtil_Seed() ;

// Ctor Parameters [CppParam { name: "U", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "V", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr MathDistributionUtil_Seed(uint32_t  U, uint32_t  V) noexcept;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17585};

/// @brief The size of the true value type
static constexpr auto  __IL2CPP_VALUE_TYPE_SIZE{0x8};

/// @brief Field U, offset: 0x0, size: 0x4, def value: None
 uint32_t  U;

/// @brief Field V, offset: 0x4, size: 0x4, def value: None
 uint32_t  V;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MathDistributionUtil_Seed, U) == 0x0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MathDistributionUtil_Seed, V) == 0x4, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MathDistributionUtil_Seed) == 0x8, "Size mismatch!");

} // namespace end def GlobalNamespace
// Dependencies System.Object
namespace GlobalNamespace {
// Is value type: false
// CS Name: MathDistributionUtil
class CORDL_TYPE MathDistributionUtil : public ::System::Object {
public:
// Declarations
using Seed = ::GlobalNamespace::MathDistributionUtil_Seed;

/// @brief Field m_w, offset 0x10, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_w, put=__cordl_internal_set_m_w)) uint32_t  m_w;

/// @brief Field m_z, offset 0x14, size 0x4 
 __declspec(property(get=__cordl_internal_get_m_z, put=__cordl_internal_set_m_z)) uint32_t  m_z;

/// @brief Method GetBeta, addr 0x18049f670, size 0xe0, virtual false, abstract: false, final false
inline double_t GetBeta(double_t  a, double_t  b) ;

/// @brief Method GetCauchy, addr 0x18049f750, size 0xe0, virtual false, abstract: false, final false
inline double_t GetCauchy(double_t  median, double_t  scale) ;

/// @brief Method GetChiSquare, addr 0x18049f830, size 0x20, virtual false, abstract: false, final false
inline double_t GetChiSquare(double_t  degreesOfFreedom) ;

/// @brief Method GetExponential, addr 0x18049f850, size 0x70, virtual false, abstract: false, final false
inline double_t GetExponential() ;

/// @brief Method GetExponential, addr 0x18049f8c0, size 0xc0, virtual false, abstract: false, final false
inline double_t GetExponential(double_t  mean) ;

/// @brief Method GetGamma, addr 0x18049f980, size 0x2b0, virtual false, abstract: false, final false
inline double_t GetGamma(double_t  shape, double_t  scale) ;

/// @brief Method GetInverseGamma, addr 0x18049fc30, size 0x40, virtual false, abstract: false, final false
inline double_t GetInverseGamma(double_t  shape, double_t  scale) ;

/// @brief Method GetLaplace, addr 0x18049fc70, size 0xc0, virtual false, abstract: false, final false
inline double_t GetLaplace(double_t  mean, double_t  scale) ;

/// @brief Method GetLogNormal, addr 0x18049fd30, size 0x90, virtual false, abstract: false, final false
inline double_t GetLogNormal(double_t  mu, double_t  sigma) ;

/// @brief Method GetNormal, addr 0x18049fe50, size 0xf0, virtual false, abstract: false, final false
inline double_t GetNormal() ;

/// @brief Method GetNormal, addr 0x18049fdc0, size 0x90, virtual false, abstract: false, final false
inline double_t GetNormal(double_t  mean, double_t  standardDeviation) ;

/// @brief Method GetStudentT, addr 0x18049ff40, size 0xc0, virtual false, abstract: false, final false
inline double_t GetStudentT(double_t  degreesOfFreedom) ;

/// @brief Method GetUint, addr 0x1804a0000, size 0x30, virtual false, abstract: false, final false
inline uint32_t GetUint() ;

/// @brief Method GetUniform, addr 0x1804a0090, size 0x50, virtual false, abstract: false, final false
inline double_t GetUniform() ;

/// @brief Method GetUniform, addr 0x1804a0030, size 0x60, virtual false, abstract: false, final false
inline double_t GetUniform(::by_ref<::GlobalNamespace::MathDistributionUtil_Seed>  seed) ;

/// @brief Method GetWeibull, addr 0x1804a00e0, size 0x120, virtual false, abstract: false, final false
inline double_t GetWeibull(double_t  shape, double_t  scale) ;

static inline ::GlobalNamespace::MathDistributionUtil* New_ctor() ;

static inline ::GlobalNamespace::MathDistributionUtil* New_ctor(uint32_t  u) ;

static inline ::GlobalNamespace::MathDistributionUtil* New_ctor(uint32_t  u, uint32_t  v) ;

/// @brief Method SetSeed, addr 0x1804a0260, size 0x10, virtual false, abstract: false, final false
inline void SetSeed(::GlobalNamespace::MathDistributionUtil_Seed  seed) ;

/// @brief Method SetSeed, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void SetSeed(uint32_t  u) ;

/// @brief Method SetSeed, addr 0x1804a0270, size 0x20, virtual false, abstract: false, final false
inline void SetSeed(uint32_t  u, uint32_t  v) ;

/// @brief Method SetSeedFromSystemTime, addr 0x1804a0200, size 0x60, virtual false, abstract: false, final false
inline void SetSeedFromSystemTime() ;

constexpr uint32_t const& __cordl_internal_get_m_w() const;

constexpr uint32_t& __cordl_internal_get_m_w() ;

constexpr uint32_t const& __cordl_internal_get_m_z() const;

constexpr uint32_t& __cordl_internal_get_m_z() ;

constexpr void __cordl_internal_set_m_w(uint32_t  value) ;

constexpr void __cordl_internal_set_m_z(uint32_t  value) ;

/// @brief Method .ctor, addr 0x1804a0290, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

/// @brief Method .ctor, addr 0x180378ff0, size 0x10, virtual false, abstract: false, final false
inline void _ctor(uint32_t  u) ;

/// @brief Method .ctor, addr 0x1804a0270, size 0x20, virtual false, abstract: false, final false
inline void _ctor(uint32_t  u, uint32_t  v) ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr MathDistributionUtil() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "MathDistributionUtil", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
MathDistributionUtil(MathDistributionUtil && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "MathDistributionUtil", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
MathDistributionUtil(MathDistributionUtil const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{17586};

/// @brief Field m_w, offset: 0x10, size: 0x4, def value: None
 uint32_t  ___m_w;

/// @brief Field m_z, offset: 0x14, size: 0x4, def value: None
 uint32_t  ___m_z;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MathDistributionUtil, ___m_w) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MathDistributionUtil, ___m_z) == 0x14, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::MathDistributionUtil) == 0x18, "Size mismatch!");

} // namespace end def GlobalNamespace
