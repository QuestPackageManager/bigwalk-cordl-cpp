#pragma once
// IWYU pragma private; include "TheVisualEngine/TVEEvents.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "TheVisualEngine/zzzz__TVEEvents_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TheVisualEngine/zzzz__TVETerrain_def.hpp"
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.add_TVEOnAssetsSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::TheVisualEngine::TVEEvents::add_TVEOnAssetsSaved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804b9380;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"add_TVEOnAssetsSaved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.remove_TVEOnAssetsSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action*)>(&::TheVisualEngine::TVEEvents::remove_TVEOnAssetsSaved)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x1804b94c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"remove_TVEOnAssetsSaved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.InvokeAssetsSaved
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::TheVisualEngine::TVEEvents::InvokeAssetsSaved)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804b9320;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"InvokeAssetsSaved", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.add_TVEOnTerrainUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*)>(&::TheVisualEngine::TVEEvents::add_TVEOnTerrainUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804b9410;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"add_TVEOnTerrainUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.remove_TVEOnTerrainUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*)>(&::TheVisualEngine::TVEEvents::remove_TVEOnTerrainUpdated)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x1804b9550;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"remove_TVEOnTerrainUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::TheVisualEngine::TVEEvents.InvokeTerrainUpdated
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::TheVisualEngine::TVETerrain*)>(&::TheVisualEngine::TVEEvents::InvokeTerrainUpdated)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x1804b9350;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"InvokeTerrainUpdated", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>()}}
                    )));
    return ___internal_method;
  }
};
inline void TheVisualEngine::TVEEvents::setStaticF_TVEOnAssetsSaved(::System::Action*  value)  {
::cordl_internals::setStaticField<::System::Action*, "TVEOnAssetsSaved", ::TheVisualEngine::TVEEvents*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* TheVisualEngine::TVEEvents::getStaticF_TVEOnAssetsSaved()  {
return ::cordl_internals::getStaticField<::System::Action*, "TVEOnAssetsSaved", ::TheVisualEngine::TVEEvents*>();
}
inline void TheVisualEngine::TVEEvents::setStaticF_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value)  {
::cordl_internals::setStaticField<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*, "TVEOnTerrainUpdated", ::TheVisualEngine::TVEEvents*>(std::forward<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*>(value));
}
inline ::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>* TheVisualEngine::TVEEvents::getStaticF_TVEOnTerrainUpdated()  {
return ::cordl_internals::getStaticField<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*, "TVEOnTerrainUpdated", ::TheVisualEngine::TVEEvents*>();
}
inline void TheVisualEngine::TVEEvents::add_TVEOnAssetsSaved(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"add_TVEOnAssetsSaved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void TheVisualEngine::TVEEvents::remove_TVEOnAssetsSaved(::System::Action*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"remove_TVEOnAssetsSaved", {}, {::i2c::type_of<::System::Action*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void TheVisualEngine::TVEEvents::InvokeAssetsSaved()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"InvokeAssetsSaved", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void TheVisualEngine::TVEEvents::add_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"add_TVEOnTerrainUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void TheVisualEngine::TVEEvents::remove_TVEOnTerrainUpdated(::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*  value)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"remove_TVEOnTerrainUpdated", {}, {::i2c::type_of<::System::Action_1<::UnityW<::TheVisualEngine::TVETerrain>>*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void TheVisualEngine::TVEEvents::InvokeTerrainUpdated(::TheVisualEngine::TVETerrain*  terrain)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::TheVisualEngine::TVEEvents*>(),
                        {"InvokeTerrainUpdated", {}, {::i2c::type_of<::TheVisualEngine::TVETerrain*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, terrain);
}
// Ctor Parameters []
constexpr ::TheVisualEngine::TVEEvents::TVEEvents()   {
}
