#pragma once
// IWYU pragma private; include "JBooth/MicroSplat/StreamManager.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/arrayw.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(StreamManager)
namespace JBooth::MicroSplat {
class MicroSplatObject;
}
namespace JBooth::MicroSplat {
class StreamCollider;
}
namespace JBooth::MicroSplat {
class StreamEmitter;
}
namespace JBooth::MicroSplat {
class StreamManager_SRPBuffers;
}
namespace JBooth::MicroSplat {
class StreamManager_StandardBuffers;
}
namespace JBooth::MicroSplat {
class StreamManager_UpdateBuffer;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class CustomRenderTexture;
}
namespace UnityEngine {
class Material;
}
namespace UnityEngine {
class RenderTexture;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace JBooth::MicroSplat {
class StreamManager;
}
namespace JBooth::MicroSplat {
class StreamManager_SRPBuffers;
}
namespace JBooth::MicroSplat {
class StreamManager_StandardBuffers;
}
namespace JBooth::MicroSplat {
class StreamManager_UpdateBuffer;
}
// Write type traits
MARK_REF_T(::JBooth::MicroSplat::StreamManager*);
MARK_REF_T(::JBooth::MicroSplat::StreamManager_SRPBuffers*);
MARK_REF_T(::JBooth::MicroSplat::StreamManager_StandardBuffers*);
MARK_REF_T(::JBooth::MicroSplat::StreamManager_UpdateBuffer*);
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamManager*, "JBooth.MicroSplat", "StreamManager");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamManager_SRPBuffers*, "JBooth.MicroSplat", "StreamManager/SRPBuffers");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamManager_StandardBuffers*, "JBooth.MicroSplat", "StreamManager/StandardBuffers");
DEFINE_IL2CPP_CLASS(::JBooth::MicroSplat::StreamManager_UpdateBuffer*, "JBooth.MicroSplat", "StreamManager/UpdateBuffer");
// Dependencies System.Object
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamManager/UpdateBuffer
class CORDL_TYPE StreamManager_UpdateBuffer : public ::System::Object {
public:
// Declarations
/// @brief Field height, offset 0x1c, size 0x4 
 __declspec(property(get=__cordl_internal_get_height, put=__cordl_internal_set_height)) int32_t  height;

/// @brief Field updateMat, offset 0x10, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateMat, put=__cordl_internal_set_updateMat)) ::UnityW<::UnityEngine::Material>  updateMat;

/// @brief Field width, offset 0x18, size 0x4 
 __declspec(property(get=__cordl_internal_get_width, put=__cordl_internal_set_width)) int32_t  width;

/// @brief Method BlitA, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void BlitA() ;

/// @brief Method BlitB, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void BlitB() ;

/// @brief Method Disable, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method GetCurrent, addr 0x1802dd520, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetCurrent() ;

/// @brief Method Init, addr 0x1802d9d80, size 0x10, virtual true, abstract: false, final false
inline void Init(int32_t  w, int32_t  h) ;

static inline ::JBooth::MicroSplat::StreamManager_UpdateBuffer* New_ctor() ;

constexpr int32_t const& __cordl_internal_get_height() const;

constexpr int32_t& __cordl_internal_get_height() ;

constexpr ::UnityW<::UnityEngine::Material> const& __cordl_internal_get_updateMat() const;

constexpr ::UnityW<::UnityEngine::Material>& __cordl_internal_get_updateMat() ;

constexpr int32_t const& __cordl_internal_get_width() const;

constexpr int32_t& __cordl_internal_get_width() ;

constexpr void __cordl_internal_set_height(int32_t  value) ;

constexpr void __cordl_internal_set_updateMat(::UnityW<::UnityEngine::Material>  value) ;

constexpr void __cordl_internal_set_width(int32_t  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamManager_UpdateBuffer() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_UpdateBuffer", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamManager_UpdateBuffer(StreamManager_UpdateBuffer && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_UpdateBuffer", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamManager_UpdateBuffer(StreamManager_UpdateBuffer const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20836};

/// @brief Field updateMat, offset: 0x10, size: 0x8, def value: None
 ::UnityW<::UnityEngine::Material>  ___updateMat;

/// @brief Field width, offset: 0x18, size: 0x4, def value: None
 int32_t  ___width;

/// @brief Field height, offset: 0x1c, size: 0x4, def value: None
 int32_t  ___height;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamManager_UpdateBuffer, ___updateMat) == 0x10, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_UpdateBuffer, ___width) == 0x18, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_UpdateBuffer, ___height) == 0x1c, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamManager_UpdateBuffer) == 0x20, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies JBooth.MicroSplat.StreamManager::UpdateBuffer
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamManager/SRPBuffers
class CORDL_TYPE StreamManager_SRPBuffers : public ::JBooth::MicroSplat::StreamManager_UpdateBuffer {
public:
// Declarations
/// @brief Field buffer0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer0, put=__cordl_internal_set_buffer0)) ::UnityW<::UnityEngine::CustomRenderTexture>  buffer0;

/// @brief Field buffer1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer1, put=__cordl_internal_set_buffer1)) ::UnityW<::UnityEngine::CustomRenderTexture>  buffer1;

/// @brief Field currentBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentBuffer, put=__cordl_internal_set_currentBuffer)) ::UnityW<::UnityEngine::CustomRenderTexture>  currentBuffer;

/// @brief Method BlitA, addr 0x1814029c0, size 0x60, virtual true, abstract: false, final false
inline void BlitA() ;

/// @brief Method BlitB, addr 0x181402a20, size 0x60, virtual true, abstract: false, final false
inline void BlitB() ;

/// @brief Method Disable, addr 0x181402a80, size 0x90, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method GetCurrent, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetCurrent() ;

/// @brief Method Init, addr 0x181402b10, size 0x280, virtual true, abstract: false, final false
inline void Init(int32_t  w, int32_t  h) ;

static inline ::JBooth::MicroSplat::StreamManager_SRPBuffers* New_ctor() ;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture> const& __cordl_internal_get_buffer0() const;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture>& __cordl_internal_get_buffer0() ;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture> const& __cordl_internal_get_buffer1() const;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture>& __cordl_internal_get_buffer1() ;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture> const& __cordl_internal_get_currentBuffer() const;

constexpr ::UnityW<::UnityEngine::CustomRenderTexture>& __cordl_internal_get_currentBuffer() ;

constexpr void __cordl_internal_set_buffer0(::UnityW<::UnityEngine::CustomRenderTexture>  value) ;

constexpr void __cordl_internal_set_buffer1(::UnityW<::UnityEngine::CustomRenderTexture>  value) ;

constexpr void __cordl_internal_set_currentBuffer(::UnityW<::UnityEngine::CustomRenderTexture>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamManager_SRPBuffers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_SRPBuffers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamManager_SRPBuffers(StreamManager_SRPBuffers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_SRPBuffers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamManager_SRPBuffers(StreamManager_SRPBuffers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20837};

/// @brief Field buffer0, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CustomRenderTexture>  ___buffer0;

/// @brief Field buffer1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CustomRenderTexture>  ___buffer1;

/// @brief Field currentBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::CustomRenderTexture>  ___currentBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamManager_SRPBuffers, ___buffer0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_SRPBuffers, ___buffer1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_SRPBuffers, ___currentBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamManager_SRPBuffers) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies JBooth.MicroSplat.StreamManager::UpdateBuffer
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamManager/StandardBuffers
class CORDL_TYPE StreamManager_StandardBuffers : public ::JBooth::MicroSplat::StreamManager_UpdateBuffer {
public:
// Declarations
/// @brief Field buffer0, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer0, put=__cordl_internal_set_buffer0)) ::UnityW<::UnityEngine::RenderTexture>  buffer0;

/// @brief Field buffer1, offset 0x28, size 0x8 
 __declspec(property(get=__cordl_internal_get_buffer1, put=__cordl_internal_set_buffer1)) ::UnityW<::UnityEngine::RenderTexture>  buffer1;

/// @brief Field currentBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_currentBuffer, put=__cordl_internal_set_currentBuffer)) ::UnityW<::UnityEngine::RenderTexture>  currentBuffer;

/// @brief Method BlitA, addr 0x181402d90, size 0x40, virtual true, abstract: false, final false
inline void BlitA() ;

/// @brief Method BlitB, addr 0x181402dd0, size 0x40, virtual true, abstract: false, final false
inline void BlitB() ;

/// @brief Method Disable, addr 0x181402a80, size 0x90, virtual true, abstract: false, final false
inline void Disable() ;

/// @brief Method GetCurrent, addr 0x1802d97f0, size 0x10, virtual true, abstract: false, final false
inline ::UnityW<::UnityEngine::RenderTexture> GetCurrent() ;

/// @brief Method Init, addr 0x181402e10, size 0x130, virtual true, abstract: false, final false
inline void Init(int32_t  w, int32_t  h) ;

static inline ::JBooth::MicroSplat::StreamManager_StandardBuffers* New_ctor() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_buffer0() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_buffer0() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_buffer1() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_buffer1() ;

constexpr ::UnityW<::UnityEngine::RenderTexture> const& __cordl_internal_get_currentBuffer() const;

constexpr ::UnityW<::UnityEngine::RenderTexture>& __cordl_internal_get_currentBuffer() ;

constexpr void __cordl_internal_set_buffer0(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_buffer1(::UnityW<::UnityEngine::RenderTexture>  value) ;

constexpr void __cordl_internal_set_currentBuffer(::UnityW<::UnityEngine::RenderTexture>  value) ;

/// @brief Method .ctor, addr 0x1802d9d80, size 0x10, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamManager_StandardBuffers() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_StandardBuffers", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamManager_StandardBuffers(StreamManager_StandardBuffers && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamManager_StandardBuffers", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamManager_StandardBuffers(StreamManager_StandardBuffers const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20838};

/// @brief Field buffer0, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___buffer0;

/// @brief Field buffer1, offset: 0x28, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___buffer1;

/// @brief Field currentBuffer, offset: 0x30, size: 0x8, def value: None
 ::UnityW<::UnityEngine::RenderTexture>  ___currentBuffer;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamManager_StandardBuffers, ___buffer0) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_StandardBuffers, ___buffer1) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager_StandardBuffers, ___currentBuffer) == 0x30, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamManager_StandardBuffers) == 0x38, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
// Dependencies UnityEngine.MonoBehaviour, UnityEngine.Vector2, UnityEngine.Vector4
namespace JBooth::MicroSplat {
// Is value type: false
// CS Name: JBooth.MicroSplat.StreamManager
class CORDL_TYPE StreamManager : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
using SRPBuffers = ::JBooth::MicroSplat::StreamManager_SRPBuffers;

using StandardBuffers = ::JBooth::MicroSplat::StreamManager_StandardBuffers;

using UpdateBuffer = ::JBooth::MicroSplat::StreamManager_UpdateBuffer;

/// @brief Field burnEvaporation, offset 0x6c, size 0x4 
 __declspec(property(get=__cordl_internal_get_burnEvaporation, put=__cordl_internal_set_burnEvaporation)) float_t  burnEvaporation;

/// @brief Field colliderBuffer, offset 0x40, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliderBuffer, put=__cordl_internal_set_colliderBuffer)) ::ArrayW<::UnityEngine::Vector4>  colliderBuffer;

/// @brief Field colliders, offset 0x78, size 0x8 
 __declspec(property(get=__cordl_internal_get_colliders, put=__cordl_internal_set_colliders)) ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamCollider>>*  colliders;

/// @brief Field emitters, offset 0x70, size 0x8 
 __declspec(property(get=__cordl_internal_get_emitters, put=__cordl_internal_set_emitters)) ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamEmitter>>*  emitters;

/// @brief Field evapAmount, offset 0xa0, size 0x8 
 __declspec(property(get=__cordl_internal_get_evapAmount, put=__cordl_internal_set_evapAmount)) ::UnityEngine::Vector2  evapAmount;

/// @brief Field evaporation, offset 0x48, size 0x8 
 __declspec(property(get=__cordl_internal_get_evaporation, put=__cordl_internal_set_evaporation)) ::UnityEngine::Vector2  evaporation;

/// @brief Field msObject, offset 0x20, size 0x8 
 __declspec(property(get=__cordl_internal_get_msObject, put=__cordl_internal_set_msObject)) ::UnityW<::JBooth::MicroSplat::MicroSplatObject>  msObject;

/// @brief Field onBuffer0, offset 0x28, size 0x1 
 __declspec(property(get=__cordl_internal_get_onBuffer0, put=__cordl_internal_set_onBuffer0)) bool  onBuffer0;

/// @brief Field resistance, offset 0x60, size 0x8 
 __declspec(property(get=__cordl_internal_get_resistance, put=__cordl_internal_set_resistance)) ::UnityEngine::Vector2  resistance;

/// @brief Field spawnBuffer, offset 0x38, size 0x8 
 __declspec(property(get=__cordl_internal_get_spawnBuffer, put=__cordl_internal_set_spawnBuffer)) ::ArrayW<::UnityEngine::Vector4>  spawnBuffer;

/// @brief Field speed, offset 0x58, size 0x8 
 __declspec(property(get=__cordl_internal_get_speed, put=__cordl_internal_set_speed)) ::UnityEngine::Vector2  speed;

/// @brief Field strength, offset 0x50, size 0x8 
 __declspec(property(get=__cordl_internal_get_strength, put=__cordl_internal_set_strength)) ::UnityEngine::Vector2  strength;

/// @brief Field timeSinceBurnEvap, offset 0x88, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSinceBurnEvap, put=__cordl_internal_set_timeSinceBurnEvap)) double_t  timeSinceBurnEvap;

/// @brief Field timeSinceEvapX, offset 0x90, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSinceEvapX, put=__cordl_internal_set_timeSinceEvapX)) double_t  timeSinceEvapX;

/// @brief Field timeSinceEvapY, offset 0x98, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSinceEvapY, put=__cordl_internal_set_timeSinceEvapY)) double_t  timeSinceEvapY;

/// @brief Field timeSinceWetnessEvap, offset 0x80, size 0x8 
 __declspec(property(get=__cordl_internal_get_timeSinceWetnessEvap, put=__cordl_internal_set_timeSinceWetnessEvap)) double_t  timeSinceWetnessEvap;

/// @brief Field updateBuffer, offset 0x30, size 0x8 
 __declspec(property(get=__cordl_internal_get_updateBuffer, put=__cordl_internal_set_updateBuffer)) ::JBooth::MicroSplat::StreamManager_UpdateBuffer*  updateBuffer;

/// @brief Field wetnessEvaporation, offset 0x68, size 0x4 
 __declspec(property(get=__cordl_internal_get_wetnessEvaporation, put=__cordl_internal_set_wetnessEvaporation)) float_t  wetnessEvaporation;

/// @brief Method Awake, addr 0x181403600, size 0x30, virtual false, abstract: false, final false
inline void Awake() ;

static inline ::JBooth::MicroSplat::StreamManager* New_ctor() ;

/// @brief Method OnDisable, addr 0x181403630, size 0x50, virtual false, abstract: false, final false
inline void OnDisable() ;

/// @brief Method OnEnable, addr 0x181403680, size 0x200, virtual false, abstract: false, final false
inline void OnEnable() ;

/// @brief Method Register, addr 0x181403880, size 0x70, virtual false, abstract: false, final false
inline void Register(::JBooth::MicroSplat::StreamCollider*  e) ;

/// @brief Method Register, addr 0x1814038f0, size 0x70, virtual false, abstract: false, final false
inline void Register(::JBooth::MicroSplat::StreamEmitter*  e) ;

/// @brief Method Unregister, addr 0x181403960, size 0x30, virtual false, abstract: false, final false
inline void Unregister(::JBooth::MicroSplat::StreamCollider*  e) ;

/// @brief Method Unregister, addr 0x181403990, size 0x30, virtual false, abstract: false, final false
inline void Unregister(::JBooth::MicroSplat::StreamEmitter*  e) ;

/// @brief Method Update, addr 0x1814039c0, size 0xc50, virtual false, abstract: false, final false
inline void Update() ;

/// @brief Method WorldToTerrain, addr 0x181404610, size 0x190, virtual false, abstract: false, final false
static inline ::UnityEngine::Vector2 WorldToTerrain(::JBooth::MicroSplat::MicroSplatObject*  ter, ::UnityEngine::Vector3  point, int32_t  width, int32_t  height) ;

constexpr float_t const& __cordl_internal_get_burnEvaporation() const;

constexpr float_t& __cordl_internal_get_burnEvaporation() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_colliderBuffer() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_colliderBuffer() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamCollider>>* const& __cordl_internal_get_colliders() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamCollider>>*& __cordl_internal_get_colliders() ;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamEmitter>>* const& __cordl_internal_get_emitters() const;

constexpr ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamEmitter>>*& __cordl_internal_get_emitters() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_evapAmount() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_evapAmount() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_evaporation() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_evaporation() ;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatObject> const& __cordl_internal_get_msObject() const;

constexpr ::UnityW<::JBooth::MicroSplat::MicroSplatObject>& __cordl_internal_get_msObject() ;

constexpr bool const& __cordl_internal_get_onBuffer0() const;

constexpr bool& __cordl_internal_get_onBuffer0() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_resistance() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_resistance() ;

constexpr ::ArrayW<::UnityEngine::Vector4> const& __cordl_internal_get_spawnBuffer() const;

constexpr ::ArrayW<::UnityEngine::Vector4>& __cordl_internal_get_spawnBuffer() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_speed() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_speed() ;

constexpr ::UnityEngine::Vector2 const& __cordl_internal_get_strength() const;

constexpr ::UnityEngine::Vector2& __cordl_internal_get_strength() ;

constexpr double_t const& __cordl_internal_get_timeSinceBurnEvap() const;

constexpr double_t& __cordl_internal_get_timeSinceBurnEvap() ;

constexpr double_t const& __cordl_internal_get_timeSinceEvapX() const;

constexpr double_t& __cordl_internal_get_timeSinceEvapX() ;

constexpr double_t const& __cordl_internal_get_timeSinceEvapY() const;

constexpr double_t& __cordl_internal_get_timeSinceEvapY() ;

constexpr double_t const& __cordl_internal_get_timeSinceWetnessEvap() const;

constexpr double_t& __cordl_internal_get_timeSinceWetnessEvap() ;

constexpr ::JBooth::MicroSplat::StreamManager_UpdateBuffer* const& __cordl_internal_get_updateBuffer() const;

constexpr ::JBooth::MicroSplat::StreamManager_UpdateBuffer*& __cordl_internal_get_updateBuffer() ;

constexpr float_t const& __cordl_internal_get_wetnessEvaporation() const;

constexpr float_t& __cordl_internal_get_wetnessEvaporation() ;

constexpr void __cordl_internal_set_burnEvaporation(float_t  value) ;

constexpr void __cordl_internal_set_colliderBuffer(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_colliders(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamCollider>>*  value) ;

constexpr void __cordl_internal_set_emitters(::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamEmitter>>*  value) ;

constexpr void __cordl_internal_set_evapAmount(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_evaporation(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_msObject(::UnityW<::JBooth::MicroSplat::MicroSplatObject>  value) ;

constexpr void __cordl_internal_set_onBuffer0(bool  value) ;

constexpr void __cordl_internal_set_resistance(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_spawnBuffer(::ArrayW<::UnityEngine::Vector4>  value) ;

constexpr void __cordl_internal_set_speed(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_strength(::UnityEngine::Vector2  value) ;

constexpr void __cordl_internal_set_timeSinceBurnEvap(double_t  value) ;

constexpr void __cordl_internal_set_timeSinceEvapX(double_t  value) ;

constexpr void __cordl_internal_set_timeSinceEvapY(double_t  value) ;

constexpr void __cordl_internal_set_timeSinceWetnessEvap(double_t  value) ;

constexpr void __cordl_internal_set_updateBuffer(::JBooth::MicroSplat::StreamManager_UpdateBuffer*  value) ;

constexpr void __cordl_internal_set_wetnessEvaporation(float_t  value) ;

/// @brief Method .ctor, addr 0x1814047a0, size 0x150, virtual false, abstract: false, final false
inline void _ctor() ;

protected:
// Ctor Parameters []
// @brief default ctor
constexpr StreamManager() ;
public:

// Ctor Parameters [CppParam { name: "", ty: "StreamManager", modifiers: "&&", def_value: None }]
// @brief delete move ctor to prevent accidental deref moves
StreamManager(StreamManager && ) = delete;

// Ctor Parameters [CppParam { name: "", ty: "StreamManager", modifiers: "const&", def_value: None }]
// @brief delete copy ctor to prevent accidental deref copies
StreamManager(StreamManager const& ) = delete;

/// @brief IL2CPP Metadata Type Index
static constexpr uint32_t  __IL2CPP_TYPE_DEFINITION_INDEX{20839};

/// @brief Field msObject, offset: 0x20, size: 0x8, def value: None
 ::UnityW<::JBooth::MicroSplat::MicroSplatObject>  ___msObject;

/// @brief Field onBuffer0, offset: 0x28, size: 0x1, def value: None
 bool  ___onBuffer0;

/// @brief Field updateBuffer, offset: 0x30, size: 0x8, def value: None
 ::JBooth::MicroSplat::StreamManager_UpdateBuffer*  ___updateBuffer;

/// @brief Field spawnBuffer, offset: 0x38, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___spawnBuffer;

/// @brief Field colliderBuffer, offset: 0x40, size: 0x8, def value: None
 ::ArrayW<::UnityEngine::Vector4>  ___colliderBuffer;

/// @brief Field evaporation, offset: 0x48, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___evaporation;

/// @brief Field strength, offset: 0x50, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___strength;

/// @brief Field speed, offset: 0x58, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___speed;

/// @brief Field resistance, offset: 0x60, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___resistance;

/// @brief Field wetnessEvaporation, offset: 0x68, size: 0x4, def value: None
 float_t  ___wetnessEvaporation;

/// @brief Field burnEvaporation, offset: 0x6c, size: 0x4, def value: None
 float_t  ___burnEvaporation;

/// @brief Field emitters, offset: 0x70, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamEmitter>>*  ___emitters;

/// @brief Field colliders, offset: 0x78, size: 0x8, def value: None
 ::System::Collections::Generic::List_1<::UnityW<::JBooth::MicroSplat::StreamCollider>>*  ___colliders;

/// @brief Field timeSinceWetnessEvap, offset: 0x80, size: 0x8, def value: None
 double_t  ___timeSinceWetnessEvap;

/// @brief Field timeSinceBurnEvap, offset: 0x88, size: 0x8, def value: None
 double_t  ___timeSinceBurnEvap;

/// @brief Field timeSinceEvapX, offset: 0x90, size: 0x8, def value: None
 double_t  ___timeSinceEvapX;

/// @brief Field timeSinceEvapY, offset: 0x98, size: 0x8, def value: None
 double_t  ___timeSinceEvapY;

/// @brief Field evapAmount, offset: 0xa0, size: 0x8, def value: None
 ::UnityEngine::Vector2  ___evapAmount;

static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___msObject) == 0x20, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___onBuffer0) == 0x28, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___updateBuffer) == 0x30, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___spawnBuffer) == 0x38, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___colliderBuffer) == 0x40, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___evaporation) == 0x48, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___strength) == 0x50, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___speed) == 0x58, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___resistance) == 0x60, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___wetnessEvaporation) == 0x68, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___burnEvaporation) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___emitters) == 0x70, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___colliders) == 0x78, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___timeSinceWetnessEvap) == 0x80, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___timeSinceBurnEvap) == 0x88, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___timeSinceEvapX) == 0x90, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___timeSinceEvapY) == 0x98, "Offset mismatch!");

static_assert(offsetof(::JBooth::MicroSplat::StreamManager, ___evapAmount) == 0xa0, "Offset mismatch!");

static_assert(sizeof(::JBooth::MicroSplat::StreamManager) == 0xa8, "Size mismatch!");

} // namespace end def JBooth::MicroSplat
