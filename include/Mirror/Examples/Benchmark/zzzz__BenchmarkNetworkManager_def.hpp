#pragma once
// IWYU pragma private; include "Mirror/Examples/Benchmark/BenchmarkNetworkManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Mirror/zzzz__NetworkManager_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(BenchmarkNetworkManager)
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Mirror::Examples::Benchmark {
class BenchmarkNetworkManager;
}
// Write type traits
MARK_REF_T(::Mirror::Examples::Benchmark::BenchmarkNetworkManager*);
DEFINE_IL2CPP_CLASS(::Mirror::Examples::Benchmark::BenchmarkNetworkManager*, "Mirror.Examples.Benchmark", "BenchmarkNetworkManager");
// Dependencies Mirror.NetworkManager
namespace Mirror::Examples::Benchmark {
// Is value type: false
// CS Name: Mirror.Examples.Benchmark.BenchmarkNetworkManager
class CORDL_TYPE BenchmarkNetworkManager : public ::Mirror::NetworkManager {
public:
// Declarations
/// @brief Field interleave, offset 0x94, size 0x4 
 __declspec(property(get=__cordl_internal_get_interleave, put=__cordl_internal_set_interleave)) float_t  interleave;

/// @brief Field spawnAmount, offset 0x90, size 0x4 
 __declspec(property(get=__cordl_internal_get_spawnAmount, put=__cordl_internal_set_spawnAmount)) int32_t  spawnAmount;

/// @brief Field spawnPrefab, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnPrefab, put=__cordl_internal_set_spawnPrefab)) ::UnityW<::UnityEngine::GameObject>  spawnPrefab;

static inline ::Mirror::Examples::Benchmark::BenchmarkNetworkManager* New_ctor() ;

/// @brief Method OnStartServer, addr 0x181553980, size 0x1b0, virtual true, abstract: false, final false
inline void OnStartServer() ;

/// @brief Method SpawnAll, addr 0x181553980, size 0x1b0, virtual false, abstract: false, final false
inline void SpawnAll() ;

constexpr float_t const& __cordl_internal_get_interleave() const;

constexpr float_t& __cordl_internal_get_interleave() ;

constexpr int32_t const& __cordl_internal_get_spawnAmount() const;

constexpr int32_t& __cordl_internal_get_spawnAmount() ;

constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_spawnPrefab() const;

constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_spawnPrefab() ;

constexpr void __cordl_internal_set_interleave(float_t  value) ;

constexpr void __cordl_internal_set_spawnAmount(int32_t  value) ;

constexpr void __cordl_internal_set_spawnPrefab(::UnityW<::UnityEngine::GameObject>  value) ;

/// @brief Method .ctor, addr 0x181553b30, size 0x20, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr BenchmarkNetworkManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "BenchmarkNetworkManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
BenchmarkNetworkManager(BenchmarkNetworkManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "BenchmarkNetworkManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
BenchmarkNetworkManager(BenchmarkNetworkManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{19342};

/// @brief Field spawnPrefab, offset: 0x88, size: 0x8, def value: None
 ::UnityW<::UnityEngine::GameObject>  ___spawnPrefab;

/// @brief Field spawnAmount, offset: 0x90, size: 0x4, def value: None
 int32_t  ___spawnAmount;

/// @brief Field interleave, offset: 0x94, size: 0x4, def value: None
 float_t  ___interleave;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::Mirror::Examples::Benchmark::BenchmarkNetworkManager, ___spawnPrefab) == 0x88, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::BenchmarkNetworkManager, ___spawnAmount) == 0x90, "Offset mismatch!");

static_assert(offsetof(::Mirror::Examples::Benchmark::BenchmarkNetworkManager, ___interleave) == 0x94, "Offset mismatch!");

static_assert(sizeof(::Mirror::Examples::Benchmark::BenchmarkNetworkManager) == 0x98, "Size mismatch!");

} // namespace end def Mirror::Examples::Benchmark
