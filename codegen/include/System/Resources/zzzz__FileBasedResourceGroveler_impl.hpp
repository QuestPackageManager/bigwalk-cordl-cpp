#pragma once
// IWYU pragma private; include "System/Resources/FileBasedResourceGroveler.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Resources/zzzz__FileBasedResourceGroveler_def.hpp"
#include "System/Resources/zzzz__IResourceGroveler_def.hpp"
#include "System/Resources/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::System::Resources::FileBasedResourceGroveler._ctor
template<>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Resources::FileBasedResourceGroveler::*)(::System::Resources::ResourceManager_ResourceManagerMediator*)>(&::System::Resources::FileBasedResourceGroveler::_ctor)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x180308500;

  inline static const ::MethodInfo* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>()}}
                    )));
    return ___internal_method;
  }
};
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator*& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator()  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediator;
}
constexpr ::System::Resources::ResourceManager_ResourceManagerMediator* const& System::Resources::FileBasedResourceGroveler::__cordl_internal_get__mediator() const {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
return this->____mediator;
}
constexpr void System::Resources::FileBasedResourceGroveler::__cordl_internal_set__mediator(::System::Resources::ResourceManager_ResourceManagerMediator*  value)  {
CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
this->____mediator = value;
}
inline void System::Resources::FileBasedResourceGroveler::_ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator)  {
static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(
                        ::i2c::class_of<::System::Resources::FileBasedResourceGroveler*>(),
                        {".ctor", {}, {::i2c::type_of<::System::Resources::ResourceManager_ResourceManagerMediator*>()}}
                    )));
return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mediator);
}
inline ::System::Resources::FileBasedResourceGroveler* System::Resources::FileBasedResourceGroveler::New_ctor(::System::Resources::ResourceManager_ResourceManagerMediator*  mediator)  {
return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Resources::FileBasedResourceGroveler*>(mediator));
}
/// @brief Convert operator to "::System::Resources::IResourceGroveler"
constexpr  System::Resources::FileBasedResourceGroveler::operator ::System::Resources::IResourceGroveler*() noexcept {
return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Resources::IResourceGroveler"
constexpr ::System::Resources::IResourceGroveler* System::Resources::FileBasedResourceGroveler::i___System__Resources__IResourceGroveler() noexcept {
return static_cast<::System::Resources::IResourceGroveler*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Resources::FileBasedResourceGroveler::FileBasedResourceGroveler()   {
}
