#pragma once
// IWYU pragma private; include "GlobalNamespace/PeckBus.hpp"
#include "UnityEngine/zzzz__ScriptableObject_impl.hpp"
#include "GlobalNamespace/zzzz__PeckBus_def.hpp"
#include "GlobalNamespace/zzzz__PeckSystemBlock_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PeckBus.get_blocks
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>* (::GlobalNamespace::PeckBus::*)()>(&::GlobalNamespace::PeckBus::get_blocks)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x180446880;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {"get_blocks", {}, {}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckBus.AddBlock
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckBus::*)(::GlobalNamespace::PeckSystemBlock*)>(&::GlobalNamespace::PeckBus::AddBlock)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x1804467c0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {"AddBlock", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemBlock*>()}}
                    )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PeckBus._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PeckBus::*)()>(&::GlobalNamespace::PeckBus::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x180303cd0;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {".ctor", {}, {}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*& GlobalNamespace::PeckBus::__cordl_internal_get__blocks()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocks;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>* const& GlobalNamespace::PeckBus::__cordl_internal_get__blocks() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____blocks;
}
constexpr void GlobalNamespace::PeckBus::__cordl_internal_set__blocks(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____blocks = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>* GlobalNamespace::PeckBus::get_blocks()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {"get_blocks", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::PeckSystemBlock>>*>(this, ___internal_method);
}
inline void GlobalNamespace::PeckBus::AddBlock(::GlobalNamespace::PeckSystemBlock*  peckSystemBlock)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {"AddBlock", {}, {::i2c::type_of<::GlobalNamespace::PeckSystemBlock*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, peckSystemBlock);
}
inline void GlobalNamespace::PeckBus::_ctor()  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::GlobalNamespace::PeckBus*>(),
                        {".ctor", {}, {}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::PeckBus* GlobalNamespace::PeckBus::New_ctor()  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PeckBus*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PeckBus::PeckBus()   {
}
