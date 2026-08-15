#pragma once
// IWYU pragma private; include "Rowlan/Genesis/Roads/ProjectSetup.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Rowlan/Genesis/Roads/zzzz__ProjectSetup_def.hpp"
inline void Rowlan::Genesis::Roads::ProjectSetup::setStaticF_DEVELOPER_MODE(bool  value)  {
::cordl_internals::setStaticField<bool, "DEVELOPER_MODE", ::Rowlan::Genesis::Roads::ProjectSetup*>(std::forward<bool>(value));
}
inline bool Rowlan::Genesis::Roads::ProjectSetup::getStaticF_DEVELOPER_MODE()  {
return ::cordl_internals::getStaticField<bool, "DEVELOPER_MODE", ::Rowlan::Genesis::Roads::ProjectSetup*>();
}
// Ctor Parameters []
constexpr ::Rowlan::Genesis::Roads::ProjectSetup::ProjectSetup()   {
}
